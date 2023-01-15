#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//实现二维数组查找的函数
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
	//杨氏矩阵数组
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	//需要在矩阵里寻找的k数字
	int k = 7;
	int n = 3;
	int u = 3;
	int ret = FindNum(arr, k, &n,&u);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是%d %d ", n, u);
	}
	else
		printf("没找到");
	return 0;
}