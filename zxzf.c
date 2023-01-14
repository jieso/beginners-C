#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	//�洢��Ҫ�������ַ�
//	char tmp = 0;
//	//�����ַ�����
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����k���ַ�
//		int j = 0;
//		tmp = *arr;
//		//�������ַ���ǰ�ƶ�һλ
//		for (j = 0; j <len ; j++)
//		{
//			*(arr+j) = *(arr + j+1);
//		}
//		*(arr+j-1) = tmp;
//	}
//}

//������ת��
// abcdef
// bafedc
// cdefab
//�����ַ�������
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
	//��ת�ַ��������ܴ����ַ�������
	assert(k <= len);
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);
}

int main()
{
	char arr[] = "abcdef";
	int k = 3;
	//printf("������Ҫ�����ַ��ĸ���");
	//scanf("%d\n", &k);
	//left_move(arr,k);
	left_move1(arr,k);
	//��ӡ���
	printf("%s ", arr);
	return 0;
 }