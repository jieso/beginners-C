#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>


//struct s
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* s1, const void* s2, size_t num)
//{
//	void* ret = s1;
//	assert(s1);
//	assert(s2);
//	while(num--)//--���ȼ��ͣ���ѭ���жϺ���--��
//	{
//		*(char*)s1 = *(char*)s2;//ת����char���ͽ�����Ȼ��һ���ֽ�һ���ֽڵĸ���
//		++(char*)s1;//��ǿ������ת����++������һ���ֽ�
//		++(char*)s2;
//	}
//	return ret;//�����ʼָ��ĳ�ʼָ��״̬
//}

void* my_memmove(void* dest,void*src,size_t count)
{
	assert(dest);
	assert(src);
	if (dest<src)
	{
		while (count--)
		{
			//��ǰ�����
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (count--)
		{
			//�Ӻ���ǰ����
			*((char*)dest + count) = *((char*)src + count);
		}
	}
}

int main() 
{
	int arr1[]={ 1,2,3,4,5,6,7,8,9 };
	//int arr2[5] = { 5 };
	//memcpy(arr2, arr1, sizeof(arr1));
	//printf("%d",arr2[0]);
	//struct s arr3[] = { {"����",20}, {"����",30} };
	//struct s arr4[3] = { 0 };
	//my_memcpy(arr4, arr3, sizeof(arr3));
	my_memmove(arr1+2, arr1, 20);
	//memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}