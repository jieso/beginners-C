#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//ʵ�ֶ�ά������ҵĺ���
int FindNum(int arr[3][3], int k, int* row, int* col)
{
	int x = 0;
	int y = *col - 1;
	while(x<=*row-1&&y>=0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*row = x;
			*col = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	//���Ͼ�������
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	//��Ҫ�ھ�����Ѱ�ҵ�k����
	int k = 7;
	int n = 3;
	int u = 3;
	int ret = FindNum(arr, k, &n,&u);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±���%d %d ", n, u);
	}
	else
		printf("û�ҵ�");
	return 0;
}