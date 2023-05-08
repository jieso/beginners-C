#define _CRT_SECURE_NO_WARNINGS 1

#include"ZYB.h"


void PreOrder(Node* roon)
{
	if (roon == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", roon->data);
	PreOrder(roon->left);
	PreOrder(roon->right);
}

void InOrder(Node* roon)
{
	if (roon == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(roon->left);
	/*printf("%d ", roon->data);*/
	InOrder(roon->right);
	printf("%d ", roon->data);
}

void test()
{
	Node* head = (Node*)malloc(sizeof(Node));
	Node* head1 = (Node*)malloc(sizeof(Node));
	Node* head2 = (Node*)malloc(sizeof(Node));
	Node* head3 = (Node*)malloc(sizeof(Node));
	Node* head4 = (Node*)malloc(sizeof(Node));
	Node* head5 = (Node*)malloc(sizeof(Node));
	head->left = head1;
	head->right = head2;
	head1->left = head3;
	head1->right = NULL;
	head2->left = head4;
	head2->right = head5;
	head3->left = NULL;
	head3->right = NULL;
	head4->left = NULL;
	head4->right = NULL;
	head5->left = NULL;
	head5->right = NULL;
	head->data = 1;
	head1->data = 2;
	head2->data = 3;
	head3->data = 4;
	head4->data = 5;
	head5->data = 6;
	//PreOrder(head);
	InOrder(head);
}

int main()
{
	test();
	return 0;
}