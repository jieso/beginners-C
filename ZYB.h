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
//�������ӿռ�
void Wcha(SL** phead, int x);
//�����ӡ
void my_pintf(SL* phead);
//����ɾ��
void Wesan(SL** phead);
//ͷ��
void Toucha(SL** phead, int x);