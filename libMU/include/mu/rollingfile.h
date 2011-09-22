

#ifndef _rollingfile_h_
#define _rollingfile_h_ 1

#include <stdarg.h>
#include "mu/platform.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * һ��ѭ����¼���ļ����
 */
struct _rollingfile_s;

typedef struct _rollingfile_s rollingfile_t;

/**
 * ����һ������ѭ����¼���ļ����
 * @params[in] nm  �ļ���
 * @params[in] max_size  ѭ������ֵ�����ļ���С������ֵʱ����
 * ���Դ������ļ�
 * @params[in] remain_count �ļ��ı�������
 */
DLL_VARIABLE rollingfile_t* rollingfile_create(const char* nm, size_t max_size, size_t remain_count);

/**
 * �رտ���ѭ����¼���ļ����
 */
DLL_VARIABLE void rollingfile_free(rollingfile_t* rf);

/**
 * ���ļ���д�����ݣ�ע�⵱���ļ���С����ѭ����ֵʱ����ɾ����
 * ����ļ������������ļ���������д�����ļ���
 */
DLL_VARIABLE void rollingfile_write(rollingfile_t* rf, const char* data, size_t n);

/**
 * �������е���������д�����
 */
DLL_VARIABLE void rollingfile_flush(rollingfile_t* rf);

#ifdef __cplusplus
}
#endif

#endif /* _rollingfile_h_ */
	

