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
//	printf("���������֣�");
//	while(1)
//	{
//		scanf("%d", &put);
//		if (ret < put)
//			printf("�´���\n");
//		if (ret > put)
//			printf("��С��\n");
//		else if(ret==put)
//		{
//			printf("�¶���\n");
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
//	printf("��ѡ��");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:
//		game();
//		break;
//	case 0:
//		printf("�˳���Ϸ");
//		break;
//	default:
//		printf("ѡ�����������ѡ��\n");
//		break;
//	}
//} while (input);



int erzao(int arr[],int i,int zhong)
{
//	int zhong = sizeof(arr) / sizeof(arr[0]);��Ԫ�ظ���ֻ������������
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
	int zhong = sizeof(arr) / sizeof(arr[0]);//sizeof-�Ǽ����ڲ�Ԫ�ظ���
	int ret = erzao(arr, i,zhong);
	
	if (ret == -1)
	{
		printf("�Ҳ���\n");

	}
	else
	{
		printf("�ҵ����±��ǣ�%d\n", ret);
	}
	return 0;
}