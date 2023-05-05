#define _CRT_SECURE_NO_WARNINGS 1

#include"ZYB.h"


//void test()
//{
//	Node* head = (Node*)malloc(sizeof(Node));
//	Node* head1 = (Node*)malloc(sizeof(Node));
//	Node* head2 = (Node*)malloc(sizeof(Node));
//	Node* head3 = (Node*)malloc(sizeof(Node));
//	Node* head4 = (Node*)malloc(sizeof(Node));
//	head->next = head1;
//	head1->next = head2;
//	head2->next = head3;
//	head3->next = head4;
//	head4->next = NULL;
//	head->data = 7;
//	head1->data = 13;
//	head2->data = 11;  
//	head3->data = 10;
//	head4->data = 1;
//	head->prev = NULL;
//	head1->prev = head;
//	head2->prev = head4;
//	head3->prev = head2;
//	head4->prev = head;	
//	Node* cur1=CpNode(head);
//  	while (head)
//	{
//		Node* cur = head->next;
//		free(head);
//		head = cur;
//	}
//	while (cur1)
//	{
//		Node* cur = cur1->next;
//		free(cur1);
//		cur1 = cur;
//	}
//}
//
//
//
//
//int main()
//{
//	test();
//	return 0;
//}

//int main() {
//    float weight, Stature, BMI;
//    while (scanf("%f %f", &weight, &Stature) != EOF)
//    {
//        BMI = weight * (Stature * Stature);
//        if (BMI >= 18.5 && BMI <= 23.9)
//            printf("Normal\n");
//        else
//            printf("Abnormal\n");
//    }
//    return 0;
//}
//交换数据-------------------------------------------------------------------
void swap(int* i, int* j)
{
	int tmp = *i;
	*i = *j;
	*j = tmp;
}
//大小堆调整-----------------------------------------------------------------
void AdjustHeap(int* a, int child)
{
	assert(a);
	int parent = (child - 1) / 2;
	while (child>0)
	{
		if (a[child] > a[parent])
		{
			swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
			break;
	}
}
//二叉树删除堆顶并调整函数
void AdjustDown(int* a, int n)
{
	assert(a);
	int parent = 0;
	int child = parent * 2 + 1;
	swap(&a[parent], &a[n]);
	while (child<n)
	{
		if (a[child] > a[child + 1] && child + 1 < n)
			++child;
		if (a[child] < a[parent])
		{
			swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;

	}
}

int main()
{
	//int a[] = { 70,56,30,25,15,10,75 };
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(a) / sizeof(a[0]);
	for (int i = size-1; i>0; --i)
	{
		//AdjustHeap(a, i);
		AdjustDown(a, i);
	}
	return 0;
}