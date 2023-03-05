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

int DigitSum(int n)
{
	return(n > 10 ?DigitSum(n/10) : 0)+n%10;
}

int main()
{
	int n = 1729;
	int ret = DigitSum(n);
	printf("%d", ret);
	return 0;
}