#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
#include<string.h>



//void MatirxFind(int(*p)[5], int c,int r,int data)
//{
//	int i = 0, j = 0;
//	while (i < c)
//	{
//		if (p[i][j]<data && p[i][r - 1]>data)
//		{
//			while (j < r)
//			{
//				if (p[i][j] == data)
//				{
//					printf("ture");
//					return;
//				}
//				j++;
//			}
//		}
//		if(p[i][j]==data || p[i][r - 1]==data)
//		{
//			printf("ture");
//			return;
//		}
//		i++;
//	}
//	printf("false");
//}
//
//int main()
//{
//	int arr[5][5] = { 0 };
//	for (int i = 0; i < 5; ++i)
//	{
//		for (int j = 0; j < 5; ++j)
//		{
//			if (i > 0 && j == 0)
//				arr[i][j] = (arr[i - 1][4]) + 1;
//			else if (i == 0 && j == 0)
//				arr[i][j] = 1;
//			else
//			arr[i][j] = (arr[i][j-1]) + 1;
//		}
//	}
//	int* p = (*(arr + 1));
//	printf("%d %d",*p, *(p - 1));
	//MatirxFind(arr,5,5,25);
// 	return 0;
//}
//字符翻转
//void Swap(char* s1, char* s2)
//{
//	char tmp = 0;
//	tmp = *s1;
//	*s1 = *s2;
//	*s2 = tmp;
//}
//
//
//void Rotation(char* data, int k,int sz)
//{
//	int left = 0;
//	int reght = k - 1;
//	while(left<reght)
//	{
//		Swap(&data[left], &data[reght]);
//		left++;
//		reght--;
//	}
//	 left = k;
//	 reght = sz-1;
//	while (left < reght)
//	{
//		Swap(&data[left], &data[reght]);
//		left++;
//		reght--;
//	}
//	left = 0;
//	reght = sz-1;
//	while (left < reght)
//	{
//		Swap(&data[left], &data[reght]);
//		left++;
//		reght--;
//	}
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	int k = 3;
//	printf("%s\n", arr);
//	Rotation(arr, k,strlen(arr));
//	printf("%s", arr);
//	return 0;
//}
//qosrt函数----------------------------------------------------------------------
//void Swap(char* s1, char* s2,int sz)
//{
//	int z = 0;
//	while (z++ < sz)
//	{
//		char tmp = 0;
//		tmp = *s1;
//		*s1++ = *s2;
//		*s2++ = tmp;
//
//	}
//}
//
//int compare(const void* elem1, const void* elem2)
//{
//	return (*(int*)elem1 - *(int*)elem2);
//
//}
//
//void my_qsort(void* dase, int num, int width, int (*p)(const void*e1,const void*e2))
//{
//	for (int i = 0; i < num-1; ++i)
//	{
//		for(int j=0;j<num-i-1;++j)
//		{ 
//			if ((*p)((char*)dase + j * width, (char*)dase + (j + 1) * width) > 0)
//			{				
//					Swap((char*)dase + j * width , (char*)dase + (j + 1) * width ,width);
//			}			
//		}
//	}
//}
//
//int main()
//{
//	srand((int)time(0));
//	int arr[20] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		arr[i++] = (int)rand() % 100;
//		printf("%d ",arr[i - 1]);
//	}
//	printf("\n");
//	i = 0;
//	my_qsort(&arr, sz, sizeof(arr[0]), compare);
//	while (i < sz)
//	{
//		arr[i++];
//		printf("%d ", arr[i - 1]);
//	}
//	return 0;
//}
//判断s2是否是s1旋转以后的字符串------------------------------------------
//void Rotation(char* head,int sz)
//{
//	char tmp = *head;
//	char* beght = head;
//	while (sz-- > 1)
//		*head++ = *++beght;
//	*head = tmp;
//}
//
//int Find(char* s1, char* s2)
//{
//	
//	int tmp=strlen(s1);
//	if (strlen(s2) != tmp)
//		return 0;
//	int j = tmp;
//	char* head1 = s1;
//	char* head2 = s2;
//	while (j-->1)
//	{
//		int i = 0;
//		while (*head1++ == *head2++&&i++<tmp)
//		{
//			if (tmp == i)
//				return 1;
//		}
//		head1 = s1;
//		head2 = s2;		
//		Rotation(&s1[0],tmp);
//	}
//	return 0;
//}
//模拟strstr---------------------------------------------------------------- 
//char* my_strstr(const char* s1, const char* s2)
//{
//	assert(s1);
//	assert(s2);
//	char* p1 = s1;
//	char* p2 = s2;
//	while (*s1++ != '\0')
//	{
//		while (*p1++ == *p2++)
//		{
//			if (*p2 == '\0')
//				return --s1;
//		}
//		p1 = s1;
//		p2 = s2;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char s1[50] = { "BBACACACACD" };
//	char s2[] = { "ACD" };
//	char* tf = my_strstr(&s1, &s2);
//	printf("%s", s1);
//	return 0;
//}
//模拟strcar函数-----------------------------------------------------
//char* my_strcat(char* e1, const char* e2)
//{
//	assert(e1&&e2);
//	char* p1 = e1;
//	while (*e1)
//	*e1++;
//	while (*e1++ = *e2++);
//	return &p1[0];
//}

//int main()
//{
//	char s1[50] = "bbac" ;
//	char s2[] =  "sacd" ;
//	char* tf = my_strcat(s1, s2);
//	printf("%s", tf);
//	return 0;
//}
//模拟strcmp函数————————————————————————————
//int my_strcmp(const char* e1, const char* e2)
//{
//	assert(e1 && e2);
//	while (*e1 && *e2)
//	{
//		if (((int)(*e1)) > ((int)(*e2)))
//			return 1;
//		else if (((int)(*e1)) < ((int)(*e2)))
//			return -1;
//		e1++;
//		e2++;
//	}
//	if (*e1 != '\0'&&*e2=='\0')
//		return 1;
//	else if (*e2 != '\0' && *e1 == '\0')
//		return -1;
//	return 0;
//}

//int main()
//{
//	char s1[] = "ABCD" ;
//	char s2[] =  "ABBCD" ;
//	int tf = my_strcmp(s1, s2);
//	printf("%d", tf);
//	return 0;
//}

//模拟strcpy函数-----------------------------------------------------
//char* my_strcpy(char* e1, const char* e2)
//{
//	char* p1 = e1;
//	while (*e1++ = *e2++);
//	return &p1[0];
//}
//int main()
//{
//	char s1[20] = "SSSABCDs";
//	char s2[] = "ABBCD";
//	char* tf = my_strcpy(s1, s2);
//	printf("%s", tf);
//	return 0;
//}

int my_strlen(const char* e1)
{
	int tmp = 0;
	while (*e1)
	{
		*e1++;
		tmp++;
	}
	return tmp;
}

int main()
{
	char s1[20] = "SSSABCDs";
	char s2[] = "ABBCD";
	int tf = my_strlen(s1);
	printf("%d", tf);
	return 0;
}