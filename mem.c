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
//	while(num--)//--优先级低，先循环判断后再--的
//	{
//		*(char*)s1 = *(char*)s2;//转换成char类型解引用然后一个字节一个字节的复制
//		++(char*)s1;//先强制类型转换再++，跳过一个字节
//		++(char*)s2;
//	}
//	return ret;//返回最开始指针的初始指向状态
//}

void* my_memmove(void* dest,void*src,size_t count)
{
	assert(dest);
	assert(src);
	if (dest<src)
	{
		while (count--)
		{
			//从前向后复制
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (count--)
		{
			//从后往前复制
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
	//struct s arr3[] = { {"张三",20}, {"李四",30} };
	//struct s arr4[3] = { 0 };
	//my_memcpy(arr4, arr3, sizeof(arr3));
	my_memmove(arr1+2, arr1, 20);
	//memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}