#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>

//����һ���ų�����������vat��ͬԪ�ص���ѷ�����ʱ�临�Ӷ�O(N)�ռ临�Ӷ�O(1);
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

//int Twoenter(int ele,int ele1)//�Ա��������Ķ�����λ�ж��ٸ���ͬ----------------------
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

//void Twoenter(int ele)//��ӡele����������λ��ż��λ����------------------------------
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
//	printf("����λ��");
//	Twoenter(name);
//	printf("ż��λ��");
//	Twoenter(name >> 1);
//	return 0;
//}

