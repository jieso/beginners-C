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
//		//¼ä¸ô²åÈë
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

bool TF(int p)
{
	if (p > 0)
		return true;
	else
		return false;
}

int main()
{
	int tmp = -1;
	int ret = TF(tmp);
	printf("%d", ret);
	return 0;
}