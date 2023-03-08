#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>


//void jiaohuan(int* arr, int* arr1, int sz)
//{
//	assert(arr != NULL && arr1 != NULL);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = arr[i] ^ arr1[i];
//		arr1[i] = arr[i] ^ arr1[i];
//		arr[i] = arr[i] ^ arr1[i];
//	}
//}

//void maopao(int* arr,int sz)
//{
//	assert(arr != NULL);
//	int i, j;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (tmp == 0)
//			return 0;
//	}
//}

void init(int* ps, int size)
{
	assert(ps != NULL);
	int i = 0;
	for (i = 0; i < size; i++)
	{
		ps[i] = 0;
	}
}

void print(int* ps, int size)
{
	assert(ps != NULL);
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", ps[i]);
	}
}

void reverse(int* ps, int size)
{
	assert(ps != NULL);
	int left = 0;
	int right = size - 1;
	int i = 0;
	for (i = 0; i < size / 2; i++)
	{
		if (left < right)
		{
			ps[left] = ps[left] ^ ps[right];
			ps[right] = ps[left] ^ ps[right];
			ps[left] = ps[left] ^ ps[right];
			left++;
			right--;
		}
	}
}

int main(int* ps, int size)

{
	char arr[] = { 'a','b','c','d','e','f' };
	char arr1[] = "abcdef";
	int ret = sizeof(arr1);
	printf("%d", ret);
	return 0;
}