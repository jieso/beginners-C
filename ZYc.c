#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>

//int DigitSum( int n,int k)
//{
//	return(k > 0 ? n * DigitSum(n, k - 1) : 1);
//}
//
//int main()
//{
//	int n = 3;
//	int k = 4;
//	int ret = DigitSum(n,k);
//	printf("%d", ret);
//	return 0;
//}

//int DigitSum(int n)
//{
//	return(n > 10 ?DigitSum(n/10) : 0)+n%10;
//}
//
//int main()
//{
//	int n = 1729;
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}

////������ת��
// abcdef
// bafedc
// cdefab
//�����ַ�������
//void reverse(char* left, char* right)
//{
//	assert(left != 0);
//	assert(right != 0);
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move1(char* arr, int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	//��ת�ַ��������ܴ����ַ�������
//	assert(k <= len);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 2;
//	//printf("������Ҫ�����ַ��ĸ���");
//	//scanf("%d\n", &k);
//	//left_move(arr,k);
//	left_move1(arr, k);
//	//��ӡ���
//	printf("%s ", arr);
//	return 0;
//}

//void feibo(int n)//�ǵݹ����n��쳲�������
//{
//	int tmp = 0;
//	int ret = 0;
//	int ret1 = 1;
//	while(n-1>0)
//	{
//		tmp = ret1;
//		ret1 += ret;
//		ret = tmp;
//		n--;
//	}
//	printf("%d", ret1);
//}

int feibo(int n)
{

	if (n <=2)
	{
		return 1;
	}
	return feibo(n - 1) + feibo(n - 2);
}

main()
{
	int n = 10;
	int ret= feibo(n);
	printf("%d", ret);
	return 0;
}