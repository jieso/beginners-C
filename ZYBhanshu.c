#define _CRT_SECURE_NO_WARNINGS 1

#include"ZYB.h"

//头插
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

//尾插
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

//尾删
void Wesan(SL** phead)
{
	//温柔一点的
	if (*phead == NULL)
	{
		printf("空");
		return;
	}
	//粗暴的
	//assert(*phead != NULL);
	if ((*phead)->ps == NULL)
	{
		free(*phead);
		*phead = NULL;
		printf("没了");
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
