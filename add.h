#define _CRT_SECURE_NO_WARNINGS 1
//#ifndef __ADD_H__//ifndef__如果没引用过则生效拿引用，反之则失效不能引用
//#define __ADD_h__
//
////函数的声明
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
//四种游戏状态
//玩家赢-*
//电脑赢-#
//平局-o
//继续-c

