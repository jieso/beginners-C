#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>

//int main()
//{
//	int i,j;
//	printf("������100��200���ڵ�������");
//    for(i=100;i<=200;i++)
//	{
//		for (j = 2; j <= 200; j++)
//		{
//			if (i % j == 0 && i != j)
//				break;
//			else if (i == j)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}

//int nian(int s)//������㷨-------------------------------------
//{
//	if (s % 4 == 0 && s % 100 != 0 || s % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	printf("��������ݣ�");
//	scanf("%d", &year);
//	int ret = nian(year);
//	if (ret == 1)
//	{
//		printf("%d�������� ", year);
//	}
//	else
//	{
//		printf("%d���������� ", year);
//	}
//	return 0;
//}

//void Fun(int n)
//{
//    if (n > 10)
//    {
//        Fun(n / 10);
//    }
//    printf("%d ", (n % 10));
//}
//
//int main()
//{
//    int i = 1234567;
//    Fun(i);
//	return 0;
//}

//int main()//�ݹ���ǵݹ�Ľ׳�--------------------------------------------------------
//{
//	int i, j;
//	i = 5;
//	j = 7;
//	i = i ^ j;
//	j = i ^ j;
//	i = i ^ j;
//	printf("%d %d ", i, j);
//	return 0;
//}


//int JC(int n)
//{
//	if(n>0)
//	{
//		n*=JC(n - 1);
//		return n;
//	}
//}
//
//int main()
//{
//	
//	int n = 10;
//	int ret = JC(n);
//	printf("%d�Ľ׳�Ϊ��%d", n, ret);
//	return 0;
//}



//void my_strlen(char* p)//�ݹ���ǵݹ��strlenʵ��------------------------------------
//{
//	assert(p);
//	int i = 0;
//	while (*p != '\0')
//	{
//		p++;
//		i++;
//	}
//	printf("�ַ�������%d���ַ�", i);
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	my_strlen(arr);
//	return;
//}

//int my_strlen(char* p)
//{
//	assert(p);
//	if(*p!='\0')
//	{
//		return 1+my_strlen(++p);
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int ret = my_strlen(arr);
//	printf("�ַ�������%d���ַ�", ret);
//	return 0;
//}

void reverse_string(char* p)
{
	char* end = p;
	while (*end != '\0')
	{
		end++;
	}
	if (p < end)
	{
		end--;
		reverse_string(++p);
		*p = *p ^ *end;
		*end = *p ^ *end;
		*p= *p ^ *end;
	}


}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
    printf("%s", arr);
	return 0;
}