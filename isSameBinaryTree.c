#define _CRT_SECURE_NO_WARNINGS 1

#include"ZYB.h"



void Destroy(Node* roon)
{
	if (roon == NULL)
	{
		//printf("NULL ");
		return;
	}
	Destroy(roon->left);
	Destroy(roon->right);
	free(roon);
}
//判断两个二叉树是否相同-----------------------------------------------------
bool isSameTree(Node* q, Node* p)
{
	if (q == NULL && p == NULL)
		return true;
	if (q == NULL || p == NULL)
		return false;
	if (q->data != p->data)
		return false;
	return isSameTree(q->left, p->left)
		&& isSameTree(q->right, p->right);
}
//判断是否为镜像二叉树--------------------------------------------------------
bool _isSymmetricTree(Node* root1, Node* root2)
{
	if (root1 == NULL && root2 == NULL)
		return true;
	if (root1 == NULL || root2 == NULL)
		return false;
	if (root1->data != root2->data)
		return false;
	return _isSymmetricTree(root1->left, root2->right)
		&& _isSymmetricTree(root1->right, root2->left);
}

bool isSymmetric(Node* root)
{
	if (root==NULL)
		return true;
	return _isSymmetricTree(root->left, root->right);
}

bool isSubTree(Node* root, Node* sub)
{
	if (root == NULL)
		return false;
	if (isSaneTree(root, sub))
		return true;
}

void test()
{
	Node* head = (Node*)malloc(sizeof(Node));
	Node* head1 = (Node*)malloc(sizeof(Node));
	Node* head2 = (Node*)malloc(sizeof(Node));
	Node* head3 = (Node*)malloc(sizeof(Node));
	Node* head4 = (Node*)malloc(sizeof(Node));
	Node* head5 = (Node*)malloc(sizeof(Node));
	Node* head6 = (Node*)malloc(sizeof(Node));
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
	head5->left = head6;
	head5->right = NULL;
	head6->left = NULL;
	head6->right = NULL;

	//head->left = head1;
	//head->right = head2;
	//head1->left = head3;
	//head1->right = head4;
	//head2->left = head5;
	//head2->right = head6;
	//head3->left = NULL;
	//head3->right = NULL;
	//head4->left = NULL;
	//head4->right = NULL;
	//head5->left = NULL;
	//head5->right = NULL;
	//head6->left = NULL;
	//head6->right = NULL;
	head->data = 1;
	head1->data = 3;
	head2->data = 3;
	head3->data = 4;
	head4->data = 3;
	head5->data = 3;
	head6->data = 4;
	
	//InOrder(head);
	//int arr=BinaryTreeSize(head);	
	//int arr = BinaryTreeLevelKSize(head,4);
	//int arr = BinaryTreeDepth(head);
	//printf("%d", arr);
	//Node* da = BinaryTreeFind(head, 8);
	//if (da)
	//	printf("%d", da->data);
	//else
	//	printf("NULL");
	//if (isUnivalTree(head))
	//	printf("true");
	//else
	//	printf("false");
	//int size=0;
	//int* arr = preorderTravesal(head, &size);

	//while (size--)
	//{
	//	printf("%d ", arr[size]);
	//}
 //   free(arr);
	//if (isSameTree(head, head2))
	//	printf("true");
	//else
	//	printf("false");
	//if (isSymmetric(head))
	//	printf("true");
	//else
	//	printf("false");
	if (isSubTree(head,head3))
		printf("true");
	else
		printf("false");
	Destroy(head);

}

int main()
{
	test();
	return 0;
}