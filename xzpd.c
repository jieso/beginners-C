#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

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