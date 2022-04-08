#pragma once

	//头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	//符号定义
#define ROW 3
#define COL 3

	//函数声明

//初始化棋盘
void csh(char board[ROW][COL], int row, int col);
//打印棋盘
void dy(char board[ROW][COL], int row, int col);
//玩家下棋
void wjxq(char board[][COL], int row, int col);//ROW可写，可不写

//电脑下棋
void dnxq(char board[][COL], int row, int col);
//判断输赢1.*玩家2.#电脑3.Q平局4.c继续
char pdwin(char board[ROW][COL], int row, int col);