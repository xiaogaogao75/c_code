#pragma once

	//ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	//���Ŷ���
#define ROW 3
#define COL 3

	//��������

//��ʼ������
void csh(char board[ROW][COL], int row, int col);
//��ӡ����
void dy(char board[ROW][COL], int row, int col);
//�������
void wjxq(char board[][COL], int row, int col);//ROW��д���ɲ�д

//��������
void dnxq(char board[][COL], int row, int col);
//�ж���Ӯ1.*���2.#����3.Qƽ��4.c����
char pdwin(char board[ROW][COL], int row, int col);