#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
#include<math.h>


//int main()
//{
//    char arr[100] = { 0 };
//    char* left = arr;
//    char* right = arr;
//    scanf("%s", &arr);
//    while (*right)
//    {
//        right++;
//    }
//    right--;
//    while (left < right)
//    {
//        *left = *left ^ *right;
//         *right = *left ^ *right;
//        *left = *left ^ *right;
//        left++;
//        right--;
//    }
//    printf("%s", arr);
//    return 0;
//}
//
//typedef struct SL
//{
//	int data;
//	struct SL* ps;
//}SL;
//
////英语快的fast，慢的solw
////为什么slow和fast一定会在环中相遇？会不会在环里错过，永远遇不上？请证明一下？
////结论：他们一定会相遇，但是需要我们证明一下
////为什么solw走一步，fast走两步？能不能一次走3,4,5.。。。N？请证明一下
////结论fast一次走n步？n>2不一定会相遇
//char hasCycle(SL* head)
//{
//	SL* fast = head, * solw = head;
//	while (fast && fast->ps)
//	{
//		fast = fast->ps->ps;
//		solw = solw->ps;
//		if (fast == solw)
//			return true;//英语真
//	}
//	return false;
//}

//Sn=a+aa+aaa+aaaa+aaaaa的前n项之和-----------------------------------------------
//int main()
//{
//	int element = 0, n = 0;
//	scanf("%d%d",&element,&n);
//	int tmp = element;
//	int tmp2 = tmp;
//	while (--n) 
//	{
//		element = element * 10+tmp;
//		tmp2 += element;
//	}
//	printf("%d", tmp2);
//	return 0;
//}

//int main()//100000以内的水仙花数-------------------------------------------------------
//{
//	int i,j=1,tmp=0;
//	for (i = 150; i < 100000; i++)
//	{
//		int total = i;
//		while (total> 10)
//		{
//			total /= 10;
//			j++;
//		}
//		total = i;
//		while (total > 0)
//		{
//			tmp += (int)pow((total % 10), j);
//			total /= 10;
//			
//		}
//		j = 1;
//		if (tmp == i&&tmp>1)
//			printf("%d ", i);
//		tmp = 0;
//	}
//	return 0;
//}

int main()
{
	int a = 3, b = 4;
	int* p = &b;
	a = ++(*p);
	printf("%d %d", a, b);
	return 0;
}