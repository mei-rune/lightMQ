

#ifndef _hashtable_h_
#define _hashtable_h_ 1

#include <stdlib.h>


#include "mu/platform.h"


#ifdef __cplusplus
extern "C" {
#endif




/** hash������ʹ���� */
#define HASHTABLE_MAX_USAGE 0.60

typedef struct hash_entry_s {

	void *key;
	size_t key_len;

	void *value;
} hash_entry_t;

/** hash���ڵ� entry */
typedef struct hash_thunk_s {

	hash_entry_t  ref;

	struct hash_thunk_s* next;

} hash_thunk_t;


typedef struct hashtable {

	unsigned int size;
	
	/** hash���ڵ�ǰ������. */
	unsigned int used;

	hash_thunk_t** entries;

	/** hash ����. */
	unsigned int (*hash_func)(const void *key, size_t len);

	/** 
	 * key �ıȽϺ���.
	 * @retval -1  key1 < key2
	 * @retval  0  key1 = key2
	 * @retval +1  key1 > key2
	 */
	int (*cmp_func)(const void *key1, size_t len1, const void *key2, size_t len2);

	/** 
	 * �����������.
	 */
	void (*free_func)(void* key, size_t key_len, void *val);

} hashtable_t;

typedef struct hashtable_iterator  hashtable_iterator_t;

/** 
 * ��ʼ��һ�� hash ��
 * @param[in]  hash_func ��ϣ����
 * @param[in]  cmp_func  key�ȽϺ���
 * @param[in]  free_func key��val��������, Ϊnullʱ��������
 */
DLL_VARIABLE void hashtable_init(hashtable_t* hash, unsigned int (*hash_func)(const void *key, size_t len)
                    , int (*cmp_func)(const void *key1, size_t len1, const void *key2, size_t len2)
                    , void (*free_func)(void* key, size_t key_len, void *val)
                    , int default_size);
/** 
 * ��ʼ��һ�� hash ��
 */
DLL_VARIABLE void hashtable_destroy(hashtable_t* hash);

/** 
 * ����һ�� hash ��
 * @param[in]  hash_func ��ϣ����
 * @param[in]  cmp_func  key�ȽϺ���
 * @param[in]  free_func key��val��������, Ϊnullʱ��������
 */
DLL_VARIABLE hashtable_t* hashtable_create(unsigned int (*hash_func)(const void *key, size_t len)
                    , int (*cmp_func)(const void *key1, size_t len1, const void *key2, size_t len2)
                    , void (*free_func)(void* key, size_t key_len, void *val)
                    , int default_size);

/**
 * ����һ�� hash ��
 */
DLL_VARIABLE void hashtable_free(hashtable_t* hash);

/** 
 * ���һ�� hash ��
 */
DLL_VARIABLE void hashtable_clear(hashtable_t* hash);

/** 
 * ��λ��ȡ��һ��val.
 */
DLL_VARIABLE void *hashtable_at(const hashtable_t* hash, size_t idx);

/** 
 * �� key ֵȡ��һ��val.
 */
DLL_VARIABLE void *hashtable_get(const hashtable_t* hash, const void *key, size_t len);

/** 
 * ���һ��key��value. 
 */
DLL_VARIABLE void hashtable_put(hashtable_t* hash, void *key, size_t key_len, void *val);

/** 
 * ɾ��һ��key��value. 
 */
DLL_VARIABLE boolean hashtable_del(hashtable_t* hash, const void *key, size_t len);

/**
 * ��ȡ hash �ж������Ŀ
 */
DLL_VARIABLE unsigned int hashtable_count(hashtable_t* hash);

/**
 * ����һ�� hash �ĵ�����
 */
DLL_VARIABLE hashtable_iterator_t* hashtable_iterator_new(hashtable_t* hash);

/**
 * ���� hash �ж������Ŀ
 */
DLL_VARIABLE void hashtable_iterator_free(hashtable_iterator_t* it);

/**
 * ����������ǰ��һλ, ����������ݷ���1, ���򷵻�0
 */
DLL_VARIABLE boolean hashtable_iterator_next(hashtable_iterator_t* it);

/**
 * ��ȡ�������ĵ�ǰ����
 */
DLL_VARIABLE hash_entry_t* hashtable_iterator_current(hashtable_iterator_t* it);

DLL_VARIABLE unsigned int _hashtable_str_hash(const void *vkey, size_t len);

DLL_VARIABLE unsigned int _hashtable_ptr_hash(const void *key, size_t len);


DLL_VARIABLE size_t _hash_string(const char *vkey, size_t len);

DLL_VARIABLE int _hashtable_str_cmp(const void *key1, size_t len1, const void *key2, size_t len2);

DLL_VARIABLE int _hashtable_ptr_cmp(const void *key1, size_t len1, const void *key2, size_t len2);

DLL_VARIABLE void _hashtable_null_free(void* key, size_t key_len, void* val);

DLL_VARIABLE void _hashtable_generic_free(void* key, size_t key_len, void* val);

#ifdef __cplusplus
};
#endif

#endif