#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

int is_left_move1(char* arr, char* arr1)
{
	int len = strlen(arr);
	int len1 = strlen(arr1);
	//判断arr与arr1字符串个数是否相等，如若不等其arr1一定不是arr左旋得来的字符串
	if (len != len1)
		return 0;
	//在arr字符串后面再追加一个arr字符串
	//strcat(arr,arr1);是由\0开始追加
	//strncat是限制追加字符串个数的，自我设置追加字符串个数
	strncat(arr, arr1, len);
	//判断arr1指向的字符串是否是arr指向字符串的子串
	char* ret = strstr(arr, arr1);
	if (ret = NULL)
		return 0;
	else
		return 1;
}

int main()
{
	//	判断arr1是否为arr左旋后的字符串
	char arr[30] = "abcdef";
	char arr1[] = "cdefab";
	int ret = is_left_move1(arr, arr1);
	if (ret == 1)
		printf("YES");
	else
		printf("NO");
	return 0;
}