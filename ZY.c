#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//void kai()
//{
//	printf("**************************\n");
//	printf("**** 1.play   0.exit *****\n");
//	printf("**************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int put = 0;
//	ret = rand()%100+1;
//	printf("请输入数字：");
//	while(1)
//	{
//		scanf("%d", &put);
//		if (ret < put)
//			printf("猜大了\n");
//		if (ret > put)
//			printf("猜小了\n");
//		else if(ret==put)
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int input = 0;
//srand((unsigned int)time(NULL));
//do
//{
//	kai();
//	printf("请选择：");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:
//		game();
//		break;
//	case 0:
//		printf("退出游戏");
//		break;
//	default:
//		printf("选择错误，请重新选择\n");
//		break;
//	}
//} while (input);



int erzao(int arr[],int i,int zhong)
{
//	int zhong = sizeof(arr) / sizeof(arr[0]);求元素个数只能在主函数内
	int lift = 0;
	int right = zhong - 1;
	while(lift<=right)
	{
		int mid = (lift + right) / 2;
		if (i > arr[mid])
		{
			lift = mid + 1;
		}
		else if (i < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int i = 7;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int zhong = sizeof(arr) / sizeof(arr[0]);//sizeof-是计算内部元素个数
	int ret = erzao(arr, i,zhong);
	
	if (ret == -1)
	{
		printf("找不到\n");

	}
	else
	{
		printf("找到了下标是：%d\n", ret);
	}
	return 0;
}