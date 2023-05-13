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
//二叉树第K层节点个数---------------------------------------------------------
int BinaryTreeLevelKSize(Node* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BinaryTreeLevelKSize(root->left,k-1)
		+ BinaryTreeLevelKSize(root->right,k-1);
}
//计算二叉树深度-------------------------------------------------------------
int BinaryTreeDepth(Node* root)
{
	if (root == NULL)
		return 0;
	int leftDepth = BinaryTreeDepth(root->left);
	int rightDepth = BinaryTreeDepth(root->right);
	return leftDepth > rightDepth ? leftDepth +1: rightDepth+1;
}
//查找二叉树里有没有n---------------------------------------------------------
Node* BinaryTreeFind(Node* root, int n)
{
	if (root == NULL)
		return NULL;
	if (root->data == n)
		return root;
	Node* leftRet = BinaryTreeFind(root->left, n);
	if (leftRet)
		return leftRet;
	Node* rightRet = BinaryTreeFind(root->right, n);
	if (rightRet)
		return rightRet;
	return NULL;
}
//判断是否为单值二叉树----------------------------------------------------
bool isUnivalTree(Node* root)
{
	if (root == NULL)
		return true;
	if (root->left && root->left->data != root->data)
		return false;
	if (root->right && root->right->data != root->data)
	    return false;
	return isUnivalTree(root->left) && isUnivalTree(root->right);
}

int BinaryTreeSize(Node* root)
{
	return root == NULL ? 0 :
		BinaryTreeSize(root->left)
		+ BinaryTreeSize(root->right) + 1;
}
//存放每一个二叉树里面data的数据进a的数组里面--------------------------------
void _preorderTraversal(Node* root, int* a, int* pi)
{
	//前序遍历
	if (root == NULL)
		return;
	a[(*pi)++] = root->data;
	_preorderTraversal(root->left, a, pi);
	_preorderTraversal(root->right, a, pi);
}

int* preorderTravesal(Node* root, int* returnSize)
{
	int Size = BinaryTreeSize(root);
	int* a = (int*)malloc(sizeof(int) * Size);
	int i = 0;
	_preorderTraversal(root, a, &i);
	*returnSize = Size;
	return a;
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
	head->data = 1;
	head1->data = 2;
	head2->data = 3;
	head3->data = 4;
	head4->data = 5;
	head5->data = 6;
	head6->data = 7;
	
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
	int size=0;
	int* arr = preorderTravesal(head, &size);
	Destroy(head);
	while (size--)
	{
		printf("%d ", arr[size]);
	}
    free(arr);

}

int main()
{
	test();
	return 0;
}