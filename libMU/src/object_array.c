
#include <string.h>
#include "object_private.h"

#ifdef __cplusplus
extern "C"
{
#endif

void _object_array_destroy(object_t *obj)
{
	ARRAY_DESTROY(object_t*, &obj->o.c_array);
}

size_t _object_array_length(object_t *obj)
{
	return ARRAY_LENGTH(object_t*, &obj->o.c_array);
}

void _object_array_clear(object_t *obj)
{
	ARRAY_CLEAR(object_t*, &obj->o.c_array);
}

boolean _object_array_set(object_t *obj, size_t idx, object_t* val)
{
    object_destroy(ARRAY_GET(object_t*, &obj->o.c_array, idx, NULL));	
	ARRAY_PUT(object_t*, &obj->o.c_array, idx, val);
	return true;
}

boolean _object_array_del(object_t *obj, size_t idx)
{
	object_destroy(ARRAY_GET(object_t*, &obj->o.c_array, idx, NULL));
	ARRAY_DEL(object_t*, &obj->o.c_array, idx, MOVE_MEM);
	return true;
}

object_t* _object_array_at(object_t *obj, size_t idx)
{
	return ARRAY_GET(object_t*, &obj->o.c_array, idx, NULL);
}

void _object_array_print(object_t *obj)
{
	string_buffer_t buffer = STRING_BUFFER_DEFAULT;
	size_t idx;
	string_buffer_assignLen(&buffer, " [ ", 3);
	for( idx = 0; idx < object_length(obj); ++ idx) {
		cstring_t value_str = object_to_string(object_element_at(obj, idx), 0, 0);
		if(0 != idx)
		    string_buffer_appendLen(&buffer, " , ", 3);
		string_buffer_appendLen(&buffer, string_data(&value_str), string_length(&value_str));
	}
	string_buffer_appendLen(&buffer, " ] ", 3);

    string_buffer_release(&buffer, &obj->_buffer);
}

DLL_VARIABLE boolean object_element_push(object_t *obj, object_t *val)
{
	ENSURE(obj, object_type_array, false);

	string_clear(&obj->_buffer);
	ARRAY_PUSH(object_t*, &obj->o.c_array, val);
	return true;
}

DLL_VARIABLE object_t * object_element_pop(object_t *obj)
{
	object_t* ret;
	ENSURE(obj, object_type_array, NULL);

	string_clear(&obj->_buffer);
	ret = ARRAY_GET(object_t*, &obj->o.c_array, 0, NULL);
	ARRAY_DEL(object_t*, &obj->o.c_array, 0, MOVE_MEM);
	return ret;
}

DLL_VARIABLE boolean object_element_set(object_t *obj, size_t idx, object_t *val)
{
	if(0 == obj)
	    return false;

    if(0 == object_fn[obj->o_type].element_set)
	    return false;

	string_clear(&obj->_buffer);
    return (*(object_fn[obj->o_type].element_set))(obj, idx, val);
}

DLL_VARIABLE boolean object_element_del(object_t *obj, size_t idx)
{
	if(0 == obj)
	    return false;
  
    if(0 == object_fn[obj->o_type].element_del)
        return false;

    if(false == (*(object_fn[obj->o_type].element_del))(obj, idx))
        return false;
    	
	string_clear(&obj->_buffer);
	return true;

//	object_destroy(ARRAY_GET(object_t*, &obj->o.c_array, idx, NULL));
//	ARRAY_DEL(object_t*, &obj->o.c_array, idx, MOVE_MEM);
//	return true;
}

DLL_VARIABLE object_t* object_element_at(object_t *obj,	size_t idx)
{
	if(0 == obj)
		return NULL;

    if(0 == object_fn[obj->o_type].element_at)
        return NULL;

    return (*(object_fn[obj->o_type].element_at))(obj, idx);
}

#ifdef __cplusplus
}
#endif