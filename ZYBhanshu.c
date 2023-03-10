#define _CRT_SECURE_NO_WARNINGS 1

#include"ZYB.h"

//ͷ��
void Toucha(SL** phead, int x)
{
	SL* nownode = (SL*)malloc(sizeof(SL));
	if (nownode != NULL)
	{
		nownode->data = x;
		nownode->ps = *phead;
	}
	else if (*phead == NULL)
	{
		*phead = nownode;
	}
}

//β��
void Wcha(SL** phead, int x)
{

	SL* nownode = (SL*)malloc(sizeof(SL));
	if (nownode != NULL)
	{
		nownode->data = x;
		nownode->ps = NULL;
	}
	if (*phead == NULL)
	{
		*phead = nownode;
	}
	else
	{
		SL* tail = *phead;
		while (tail->ps != NULL)
		{
			tail = tail->ps;
		}
		tail->ps = nownode;
	}

}

//βɾ
void Wesan(SL** phead)
{
	//����һ���
	if (*phead == NULL)
	{
		printf("��");
		return;
	}
	//�ֱ���
	//assert(*phead != NULL);
	if ((*phead)->ps == NULL)
	{
		free(*phead);
		*phead = NULL;
		printf("û��");
		return;
	}
	else
	{
		SL* tail = *phead;
		while (tail->ps->ps)
		{
			tail = tail->ps;
		}
		free(tail->ps);
		tail->ps = NULL;
	}
}

void my_pintf(SL* phead)
{
	SL* tail = phead;
	while (tail != NULL)
	{
		printf("%d ", tail->data);
		tail = tail->ps;
	}
	printf("\n");
}
