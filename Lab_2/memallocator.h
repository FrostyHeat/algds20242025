#pragma once
#ifndef __MEMALLOCATOR_H__E71A34CB
#define __MEMALLOCATOR_H__E71A34CB
#include "gtest/gtest.h"
#ifdef __cplusplus
extern void* memory_pool;
extern int memory_pool_size;
extern MemoryBlock* free_list;
extern "C" {
#endif

	/**
	 * �������������� ������� ���������� ������� �� �������� ������� ������.
	 *
	 * @param pMemory ��������� �� ������� ������, ������� ����� �������������� ��� ��������� ������.
	 * @param size ������ ������� ������ � ������.
	 * @return 1, ���� ������������� �������, 0 � ������ ������.
	 */
	int meminit(void* pMemory, int size);

	/**
	 * ����������� ������� ����������. ��� ������� ����� �������������� ���
	 * ���������� �������� �� ������ ������ ��� ��� ������� ��������� �������.
	 */
	void memdone();

	/**
	 * �������� ���� ������ ��������� �������.
	 *
	 * @param size ������ ���������� ����� ������ � ������.
	 * @return ��������� �� ���������� ���� ������, ���� ��������� �������.
	 *         ���������� 0 (NULL), ���� ��������� ����������.
	 */
	void* memalloc(int size);

	/**
	 * ����������� ����� ���������� ���� ������.
	 *
	 * @param p ��������� �� ���� ������, ���������� �������� memalloc.
	 */
	void memfree(void* p);

	/**
	 * ���������� ����������� ������ ������� ������, ����������� ��� ���������� ������ ����������.
	 *
	 * ��� ������� �������, ����� ����������, ������� ������ ��������� ���
	 * ��������� ���� �� ������ ����� ������ � ����������� ���������������.
	 *
	 * @return ����������� ������ ������� ������ � ������.
	 */
	int memgetminimumsize();

	/**
	 * ���������� ������ ��������������, ������� ������������ ��� ���������� ������ ���������� ������.
	 *
	 * ��� ������� ������� ��� ������� ����� ����������� ������.
	 *
	 * @return ������ �������������� � ������.
	 */
	int memgetblocksize();

#ifdef __cplusplus
}
#endif

#endif // __MEMALLOCATOR_H__E71A34CB