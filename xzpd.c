#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>


void reverse(char* left, char* right)
{
	assert(left != 0);
	assert(right != 0);
	char tmp = 0;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move1(char* arr, int k)
{
	assert(arr != NULL);
	int len = strlen(arr);
	//翻转字符个数不能大于字符串个数
	assert(k <= len);
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);
}
//左旋一共len个排列方式，逐一对比筛选
int is_left_move(char* arr, char* arr1)
{
	int len = strlen(arr);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_move1(arr, 1);
		int ret = strcmp(arr, arr1);
		if (ret == 0)
			return 1;
	}
	return 0;
}

int main()
{
//	判断arr1是否为arr左旋后的字符串
	char arr[] = "abcdef";
	char arr1[] = "cdefab";
	int ret = is_left_move(arr, arr1);
	if (ret == 1)
		printf("YES");
	else
		printf("NO");
	return 0;
}