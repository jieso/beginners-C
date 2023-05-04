#define _CRT_SECURE_NO_WARNINGS 1

#include"ZYB.h"

void test()
{
	Node* head = (Node*)malloc(sizeof(Node));
	Node* head1 = (Node*)malloc(sizeof(Node));
	Node* head2 = (Node*)malloc(sizeof(Node));
	Node* head3 = (Node*)malloc(sizeof(Node));
	Node* head4 = (Node*)malloc(sizeof(Node));
	head->next = head1;
	head1->next = head2;
	head2->next = head3;
	head3->next = head4;
	head4->next = NULL;
	head->data = 7;
	head1->data = 13;
	head2->data = 11;
	head3->data = 10;
	head4->data = 1;
	head->prev = NULL;
	head1->prev = head;
	head2->prev = head4;
	head3->prev = head2;
	head4->prev = head;	
	Node* cur1=CpNode(head);
  	while (head)
	{
		Node* cur = head->next;
		free(head);
		head = cur;
	}
	while (cur1)
	{
		Node* cur = cur1->next;
		free(cur1);
		cur1 = cur;
	}
}




int main()
{
	test();
	return 0;
}