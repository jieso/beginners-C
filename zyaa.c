#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>


typedef struct SL
{
	int data;
	struct SL* ps;
}SL;

//找到倒数第k个链表---------------------------------------------------------------
SL* zhaoshu(SL* phead,int k)
 {
	if (phead == NULL)
	{
		return NULL;
	}
	SL* str1 = phead;
	SL* str2 = phead;
	int count = 0;

	while (str2)
	{
		if (count >= k)
		{
			str1 = str1->ps;
		}
			str2 = str2->ps;
			count++;

	}
	if (count < k)
	{
		return NULL;
	}
	return str1;
}

int main()
{
	SL* n1 = (SL*)malloc(sizeof(SL));
	SL* n2 = (SL*)malloc(sizeof(SL));
	SL* n3 = (SL*)malloc(sizeof(SL));
	SL* n4 = (SL*)malloc(sizeof(SL));
	SL* n5 = (SL*)malloc(sizeof(SL));
	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;
	n5->data = 5;
	n1->ps = n2;
	n2->ps = n3;
	n3->ps = n4;
	n4->ps = n5;
	n5->ps = NULL;
	//fanzhuan(&n1);
	SL* ret = zhaoshu(n1,2);
	printf("%d", ret->data);
	return 0;
}

//int main()
//{
//	int i, j;
//	int count = 0;
//	//要筛选的完数
//	for (i =2; i <= 1000; i++)
//	{
//		//筛选能整除i的数
//		for (j = 2; j <= i/2; j++)
//		{
//			//整除i的数相加以及限制条件
//			if (i % j == 0)
//				count += j;
//		}
//		//判断是否为完数，是就将其打印
//		if (i == count)
//		{
//			printf("%d its factors are", i);
//			for (j = 1; j <= i/2; j++)
//			{
//				if (i % j == 0)
//				{
//					printf(",%d", j);
//				}
//			}
//			printf("\n");
//		}
//		count = 0;
//	}
//	return 0;
//}