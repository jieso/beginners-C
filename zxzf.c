#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	//存储需要左旋的字符
//	char tmp = 0;
//	//计算字符个数
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋k个字符
//		int j = 0;
//		tmp = *arr;
//		//把所有字符向前移动一位
//		for (j = 0; j <len ; j++)
//		{
//			*(arr+j) = *(arr + j+1);
//		}
//		*(arr+j-1) = tmp;
//	}
//}

//三步翻转法
// abcdef
// bafedc
// cdefab
//逆序字符串函数
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

int main()
{
	char arr[] = "abcdef";
	int k = 3;
	//printf("输入需要左旋字符的个数");
	//scanf("%d\n", &k);
	//left_move(arr,k);
	left_move1(arr,k);
	//打印结果
	printf("%s ", arr);
	return 0;
 }