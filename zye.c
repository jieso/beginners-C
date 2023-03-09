#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>

//这是一个排除数组里面与vat相同元素的最佳方法，时间复杂度O(N)空间复杂度O(1);
//int removeElement(int* muns, int munSize, int vat)
//{
//	int src = 0, dst = 0;
//	while (src < munSize)
//	{
//		if (muns[src] != vat)
//		{
//			muns[dst] = muns[src];
//			src++;
//			dst++;
//		}
//		else
//		{
//			src++;
//		}
//	}
//	return dst;
// }

//int Twoenter(int ele,int ele1)//对比两个数的二进制位有多少个不同----------------------
//{
//	int tmp = 0;
//	while (ele+ele1!=0)
//	{
//		if ((ele % 2) != (ele1 % 2))
//		{
//			tmp++;
//		}
//		ele /= 2;
//		ele1 /= 2;
//	}
//	return tmp;
//}
//
//
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int ret=Twoenter(a,b);
//	printf("%d", ret);
//	return 0;
//}

//int Twoenter(int ele)
//{
//	int tmp = 0;
//	while(ele)
//	{
//		if ((ele & 1) == 1)
//		{
//			tmp++;
//		}
//		ele=ele >> 1;
//	}
//	return tmp;
//}

//void Twoenter(int ele)//打印ele二进制奇数位和偶数位的数------------------------------
//{
//	while (ele)
//	{
//		if ((ele & 1) == 1)
//		{
//			printf("1 ");
//		}
//		else
//			printf("0 ");
//		ele = ele >> 2;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int name = 20;
//	printf("奇数位：");
//	Twoenter(name);
//	printf("偶数位：");
//	Twoenter(name >> 1);
//	return 0;
//}

