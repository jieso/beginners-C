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
//链表增加空间
void Wcha(SL** phead, int x);
//链表打印
void my_pintf(SL* phead);
//链表删除
void Wesan(SL** phead);
//头插
void Toucha(SL** phead, int x);