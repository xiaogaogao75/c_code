#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("************1.play************\n");
	printf("************0.exit************\n");
	printf("******************************\n");
}
void game()
{	
	//�洢����-��ά����
	char board[ROW][COL];
	//��ʼ������-��ʼ���ո�
	csh(board,ROW,COL);
	//��ӡ����-��ӡ��������
	dy(board,ROW,COL);
	//�洢ret����
	char ret = 0;
	//��ʼ����
	while (1)
	{
		//�������
		wjxq(board, ROW, COL);
		dy(board, ROW, COL);
		ret=pdwin(board, ROW, COL);
		if (ret != 'c')
			break;
		//������
		dnxq(board, ROW, COL);
		dy(board, ROW, COL);
		ret = pdwin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if(ret=='#')
	{	
		printf("����Ӯ��!\n");
	} 
	else
	{
		printf("ƽ�֣�\n");
	}
	dy(board, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0: printf("�˳���Ϸ��\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
	return 0;
}