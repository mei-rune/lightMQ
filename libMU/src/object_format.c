
#include "object_private.h"
#include "mu/itostr.h"


#ifdef __cplusplus
extern "C"
{
#endif

DLL_VARIABLE void object_format(object_t* obj, format_fn_t cb, void* ctxt)
{
	switch(obj->o_type) {
		case object_type_string: {
			cstring_t str = object_to_string(obj, "", 0);
			(*cb)( "\"", 1, ctxt);
			(*cb)(string_data(&str), string_length(&str), ctxt);
			(*cb)( "\"", 1, ctxt);
			break;
		}
		case object_type_table: {
			size_t idx;
			(*cb)(" { ", 3, ctxt);
			for( idx = 0; idx < object_length(obj); ++ idx) {
				if(0 != idx)
					(*cb)(" , ", 3, ctxt);

				object_format(object_element_at(obj, idx), cb, ctxt);
			}
			(*cb)(" } ", 3, ctxt);
			break;
		}
		case object_type_array: {
			size_t idx;
			(*cb)(" [ ", 3, ctxt);
			for( idx = 0; idx < object_length(obj); ++ idx) {
				if(0 != idx)
					(*cb)(" , ", 3, ctxt);

				object_format(object_element_at(obj, idx), cb, ctxt);
			}
			(*cb)(" ] ", 3, ctxt);
			break;
		}
		default: {
			cstring_t s = object_to_string(obj, NULL, 0);
			(*cb)(s.str, s.len, ctxt);
		}
	}
}

#ifdef __cplusplus
}
#endif

