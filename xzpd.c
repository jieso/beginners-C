#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>


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
////����һ��len�����з�ʽ����һ�Ա�ɸѡ
//int is_left_move(char* arr, char* arr1)
//{
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move1(arr, 1);
//		int ret = strcmp(arr, arr1);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//
//
//int main()
//{
////	�ж�arr1�Ƿ�Ϊarr��������ַ���
//	char arr[] = "abcdef";
//	char arr1[] = "cdefab";
//	int ret = is_left_move(arr, arr1);
//	if (ret == 1)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}

int is_left_move1(char* arr, char* arr1)
{
	int len = strlen(arr);
	int len1 = strlen(arr1);
	//�ж�arr��arr1�ַ��������Ƿ���ȣ�����������arr1һ������arr�����������ַ���
	if (len != len1)
		return 0;
	//��arr�ַ���������׷��һ��arr�ַ���
	//strcat(arr,arr1);����\0��ʼ׷��
	//strncat������׷���ַ��������ģ���������׷���ַ�������
	strncat(arr, arr1, len);
	//�ж�arr1ָ����ַ����Ƿ���arrָ���ַ������Ӵ�
	char* ret = strstr(arr, arr1);
	if (ret = NULL)
		return 0;
	else
		return 1;
}

int main()
{
	//	�ж�arr1�Ƿ�Ϊarr��������ַ���
	char arr[30] = "abcdef";
	char arr1[] = "cdefab";
	int ret = is_left_move1(arr, arr1);
	if (ret == 1)
		printf("YES");
	else
		printf("NO");
	return 0;
}