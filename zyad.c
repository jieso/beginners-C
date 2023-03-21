#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
#include<math.h>
#include<stdbool.h>



//struct Node
//{
//	int data;
//	struct Node* next;
//	struct Node* random;
//};
//
//struct N0de* Listnide(struct Node* head)
//{
//	struct Node* cur = head;
//	while(cur)
//	{
//		struct Node* copy = (struct Mode*)malloc(sizeof(struct Node));
//		copy->data = cur->data;
//		//间隔插入
//		copy->next = cur->next;
//		cur->next = copy;
//		cur = copy->next;
//	}
//	cur = head;
//	while (cur)
//	{
//		struct Node* copy = cur->next;
//		if (cur->random == NULL)
//			copy->random = NULL;
//		else
//			copy->random = cur->random->next;
//		cur = copy->next;
//	}
//	struct Node* copyhead = NULL, * copyTail = NULL;
//	cur = head;
//	while (cur)
//	{
//		struct Node* copy = cur->next;
//		struct Node* next = copy->next;
//		if (copyTail == NULL)
//		{
//			copyhead = copyTail = copy;
//		}
//		else
//		{
//			copyTail->next = copy;
//			copyTail = copy;
//		}
//		cur->next = next;
//		cur = next;
//	}
//}

//int main()
//{
//	int i;
//	int sz = 7;
//	for (i = 0; i < sz; i++)
//	{
//
//		for
//		{
//			printf(" ");
//		}
//	}
//	return 0;
//}

//bool TF(int p)
//{
//	if (p > 0)
//		return true;
//	else
//		return false;
//}
//
//
//
//int main()
//{
//	//钱
//	int money = 20;
//	//记录汽水瓶
//	int tmp = money;
// 	int tmp1 = 0;
//	while(money)
//	{
//		tmp += money / 2;
//		tmp1 += money % 2;
//		//余下来的单个瓶子余够两个就换一瓶汽水
//		if (tmp1 > 1)
//		{
//			tmp++;
//			money++;
//			tmp1 = 0;
//		}
//		money /= 2;
//	}
//	printf("%d", tmp);
//	return 0;
//}

//char* my_strcpy(char* dest,char*src)
//{
//    assert(*dest&&*src);
//    char* data = dest;
//    while (*src)
//    {
//        *dest = *src;
//        dest++;
//        src++;
//    }
//    *dest = '\0';
//    return data;
//}
//
//int main()
//{
//    char arr[10] = "0";
//    char arr1[] = "abcdefg";
//    my_strcpy(arr,arr1);
//    printf("%s", arr);
//    return 0;
//}

void OddPutFront(int *data,int size)
{
	assert(*data);
	int* head = data;
	int* tail = (data+size-1);
	while (head<tail)
	{
		if (*head % 2 != 0)
			head++;
		else if (*tail % 2 != 1)
			tail--;
		else
		{
			*head = *head ^ *tail;
			*tail = *head ^ *tail;
			*head = *head ^ *tail;
			*head++;
			*tail--;
		}
	}
}

int main()
{
	int arr[] = { 2,2,6,4,8,5,7,11,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	OddPutFront(arr,size);
	for(i=0;i<size;i++)
	{
		printf("%d " ,arr[i]);
	}
	return 0;
}