#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "mu/hashtable.h"

#ifdef __cplusplus
extern "C" {
#endif


//
//struct hashtable_iterator
//{
//	hashtable_t* table;
//
//	/** entries ������. */
//	unsigned int index;
//
//	/** hash_entry ��������. */
//	hash_thunk_t* next;
//};
//
//
//void _hashtable_resize(hashtable_t* hash);
//
//
//DLL_VARIABLE void hashtable_init(hashtable_t* hash, unsigned int (*hash_func)(const void *key, size_t len)
//                    , int (*cmp_func)(const void *key1, size_t len1, const void *key2, size_t len2)
//                    , void (*free_func)(void* key, size_t key_len, void *val)
//                    , int default_size)
//{
//	hash->size = default_size;
//	hash->used = 0;
//
//	hash->entries = (hash_thunk_t**)my_calloc(hash->size, sizeof(hash_thunk_t*));
//
//	hash->hash_func = hash_func;
//	hash->cmp_func = cmp_func;
//
//	hash->free_func = free_func;
//}
//
//DLL_VARIABLE void hashtable_destroy(hashtable_t* hash)
//{
//	if(0 == hash)
//		return;
//
//	hashtable_clear(hash);
//	my_free(hash->entries);
//}
//
//DLL_VARIABLE hashtable_t* hashtable_create(unsigned int (*hash_func)(const void *key, size_t len)
//                    , int (*cmp_func)(const void *key1, size_t len1, const void *key2, size_t len2)
//                    , void (*free_func)(void* key, size_t key_len, void *val)
//                    , int default_size)
//{
//	hashtable_t* hash = 0;
//	if(NULL == hash_func || NULL == cmp_func)
//		return NULL;
//
//	hash = (hashtable_t*) my_malloc(sizeof(struct hashtable));
//
//	hashtable_init(hash, hash_func, cmp_func, free_func, default_size);
//	return hash;
//}
//
//DLL_VARIABLE void hashtable_free(hashtable_t* hash)
//{
//	if(0 == hash)
//		return;
//
//	hashtable_destroy(hash);
//	my_free(hash);
//}
//
//
//void _hashtable_put(hashtable_t* hash, void *key, size_t key_len
//	, void *val, hash_thunk_t* new_el)
//{
//	hash_thunk_t* el = NULL;
//	hash_thunk_t* parent_el = NULL;
//	
//	unsigned int  index = (hash->hash_func)(key, key_len) % hash->size;
//	hash_thunk_t*  root_el = hash->entries[index];
//
//
//
//	/* ����Ƿ��Ѵ��� */
//	el = root_el;
//	while (el && (hash->cmp_func)(el->ref.key, el->ref.key_len, key, key_len))
//	{
//		parent_el = el;
//		el = el->next;
//	}
//	
//	if(el)
//	{
//		/* �Ѵ���, ��ʹ�þɶ��� */
//		assert(0 == new_el);
//
//
//		if (hash->free_func)
//			hash->free_func((el->ref.key == key)?NULL:el->ref.key
//			, el->ref.key_len
//			, (el->ref.value == val)?NULL:el->ref.value);
//			
//		el->ref.key = key;
//		el->ref.value = val;
//		el->ref.key_len = key_len;
//		return;
//	}
//
//	if(0 == new_el)
//	{
//		new_el = (hash_thunk_t*) my_malloc(sizeof(hash_thunk_t));
//		new_el->ref.key = key;
//		new_el->ref.key_len = key_len;
//		new_el->ref.value = val;
//	}
//
//	new_el->next = NULL;
//
//	
//	if (parent_el) // ���������ʱ, parent_el ����hash->entries[index]���������һ��
//		parent_el->next = new_el;
//	else
//		hash->entries[index] = new_el;
//	
//
//	hash->used++;
//		
//	/* ���ʹ���ʴ��� HASHTABLE_MAX_USAGE ʱ�����½�, ��Ҫ������С */
//	if ((double) hash->used / hash->size > HASHTABLE_MAX_USAGE)
//		_hashtable_resize(hash);
//
//	return;
//}
//
//
//
//void _hashtable_resize(hashtable_t* hash)
//{
//	unsigned int old_size  = hash->size;
//	hash_thunk_t** old_entries = hash->entries;
//
//	// ���·����ڴ�
//	hash->size *= 2;
//	hash->entries = (hash_thunk_t**)my_calloc(hash->size, sizeof(hash_thunk_t*));
//
//	hash->used = 0;
//
//	{	
//		unsigned int i;
//		for (i = 0; i < old_size; i++)
//		{
//			hash_thunk_t* el = old_entries[i];
//			while (el)
//			{
//				hash_thunk_t* next = el->next;
//				_hashtable_put(hash, el->ref.key, el->ref.key_len, el->ref.value, el);
//				el = next;
//			}
//		}
//	}
//
//	/* free old data */
//	my_free(old_entries);
//}
//
//DLL_VARIABLE void hashtable_put(hashtable_t* hash, void *key, size_t key_len, void *val)
//{
//	if(0 == val)
//		hashtable_del(hash, key, key_len);
//	else
//		_hashtable_put(hash, key, key_len, val, NULL);
//}
//
//DLL_VARIABLE boolean hashtable_del(hashtable_t* hash, const void *key, size_t len)
//{
//	hash_thunk_t* el = NULL;
//	hash_thunk_t* parent_el = NULL;
//	
//	unsigned int  index = (hash->hash_func)(key, len) % hash->size;
//	hash_thunk_t*  root_el = hash->entries[index];
//
//	/* ����Ƿ��Ѵ��� */
//	el = root_el;
//	while (el && (hash->cmp_func)(el->ref.key, el->ref.key_len, key, len))
//	{
//		parent_el = el;
//		el = el->next;
//	}
//
//	if(!el)  /* ������, �򷵻� */
//		return false;
//		
//
//	if (parent_el)
//		parent_el->next = el->next;
//	else
//		hash->entries[index] = el->next;
//
//	if (hash->free_func)
//		(hash->free_func)(el->ref.key, el->ref.key_len, el->ref.value);
//
//	my_free(el);
//	hash->used--;
//	return true;
//}
//
//DLL_VARIABLE void * hashtable_get(const hashtable_t* hash, const void *key, size_t len)
//{
//	int index = (hash->hash_func)(key, len) % hash->size;
//	hash_thunk_t* el = hash->entries[index];
//	while (el) {
//		if ((hash->cmp_func)(el->ref.key, el->ref.key_len, key, len) == 0) {
//			return el->ref.value;
//		}
//		el = el->next;
//	}
//
//	return NULL;
//}
//
//DLL_VARIABLE void* hashtable_at(const hashtable_t* hash, size_t idx)
//{	
//	unsigned int i;
//	size_t count;
//	if(0 == hash)
//		return 0;
//
//	count = 0;
//	for (i = 0; i < hash->size; i++) 
//	{
//		hash_thunk_t* el = hash->entries[i];
//		while (el) 
//		{
//			if(idx == count ++)
//				return el->ref.value;
//
//			el = el->next;
//		}
//	}
//	return 0;
//}
//
//DLL_VARIABLE void hashtable_clear(hashtable_t* hash)
//{
//	unsigned int i;
//	if(0 == hash)
//		return;
//
//
//	for (i = 0; i < hash->size; i++) 
//	{
//		hash_thunk_t* el = hash->entries[i];
//		hash->entries[i] = 0;
//		while (el) 
//		{
//			hash_thunk_t* next = el->next;
//			if (hash->free_func)
//				(hash->free_func)(el->ref.key, el->ref.key_len, el->ref.value);
//			my_free(el);
//			el = next;
//		}
//	}
//
//	hash->used = 0;
//}
//
//
//
//DLL_VARIABLE unsigned int hashtable_count(hashtable_t* hash)
//{
//	return hash->used;
//}
//
//
///**
// * ����һ�� hash �ĵ�����
// */
//DLL_VARIABLE hashtable_iterator_t* hashtable_iterator_new(hashtable_t* hash)
//{
//	hashtable_iterator_t* it = (hashtable_iterator_t*)my_malloc(sizeof(struct hashtable_iterator));
//	it->table = hash;
//	it->index = -1;
//	it->next = NULL;
//
//	return it;
//}
//
///**
// * ���� hash �ж������Ŀ
// */
//DLL_VARIABLE void hashtable_iterator_free(hashtable_iterator_t* it)
//{
//	my_free(it);
//}
//
///**
// * ����������ǰ��һλ
// */
//DLL_VARIABLE boolean hashtable_iterator_next(hashtable_iterator_t* it)
//{
//	if(NULL != it->next)
//		it->next = it->next->next;
//	
//	if(NULL != it->next)
//		return true;
//
//	while( (++it->index) < it->table->size )
//	{
//		it->next = it->table->entries[it->index];;
//		if(NULL != it->next)
//			return true;
//	}
//
//	return false;
//}
//
///**
// * ��ȡ�������ĵ�ǰ����
// */
//DLL_VARIABLE hash_entry_t* hashtable_iterator_current(hashtable_iterator_t* it)
//{
//	return (NULL != it->next)?&(it->next->ref):NULL;
//}
//
//
//
//
//DLL_VARIABLE int _hashtable_ptr_cmp(const void *key1, size_t len1, const void *key2, size_t len2)
//{
//	if(len1 == len2)
//		return memcmp(key1, key2, len1);
//	else if(len1 > len2)
//		return 1;
//	else 
//		return -1;
//}
//
//DLL_VARIABLE unsigned int _hashtable_str_hash(const void *vkey, size_t len)
//{
//	unsigned int hash = 5381;
//	size_t i;
//	const char *key = (char *) vkey;
//
//	for (i = 0; i < len; i++)
//		hash = ((hash << 5) + hash) + key[i]; /* hash * 33 + char */
//
//	return hash;
//}
//
//DLL_VARIABLE unsigned int _hashtable_ptr_hash(const void *vkey, size_t len)
//{
//	unsigned int hash = 5381;
//	size_t i;
//	const char *key = (char *) vkey;
//
//	for (i = 0; i < len; i++)
//		hash = ((hash << 5) + hash) + key[i]; /* hash * 33 + char */
//
//	return hash;
//}
//
//
//
//DLL_VARIABLE void _hashtable_null_free(void* key, size_t key_len, void* val)
//{
//}
//
//DLL_VARIABLE void _hashtable_generic_free(void* key, size_t key_len, void* val)
//{
//	my_free(key);
//	my_free(val);
//}

#ifdef __cplusplus
}
#endif

