#define _CRT_SECURE_NO_WARNINGS 1
//#ifndef __ADD_H__//ifndef__���û���ù�����Ч�����ã���֮��ʧЧ��������
//#define __ADD_h__
//
////����������
//int add(int x, int y);
//
//#endif
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void IniotBoard(char board[ROW][COL], int row, int col);
void DispiayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void DianNao(char board[ROW][COL], int row, int col);
char ShiFouYing(char board[ROW][COL], int row, int col);
//������Ϸ״̬
//���Ӯ-*
//����Ӯ-#
//ƽ��-o
//����-c

