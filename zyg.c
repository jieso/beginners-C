#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>


typedef struct SL
{
	int data;
	struct SL* ps;
}SL;

void fanzhuan(SL** phead)//Á´±í·­×ª----------------------------------------------------
{
	SL* n1, * n2, * n3;
	n1 = NULL;
	n2 = *phead;
	n3 = (*phead)->ps;
	while (n2)
	{
		//·­×ª
		n2->ps = n1;
		n1 = n2;
		n2 = n3;
		if (n3)
			n3 = n3->ps;
	}
}
//void Toucha(SL** phead)
//{
//
//}
int main()
{
	SL* n1 = (SL*)malloc(sizeof(SL));
	SL* n2 = (SL*)malloc(sizeof(SL));
	SL* n3 = (SL*)malloc(sizeof(SL));
	SL* n4 = (SL*)malloc(sizeof(SL));
	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;
	n1->ps = n2;
	n2->ps = n3;
	n3->ps = n4;
	n4->ps = NULL;
	fanzhuan(&n1);
	return 0;
}

