#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


			//��������Ϸ
			/*
			1.�Զ�����һ��1-100�������
			2.������
				a.�¶��ˣ���ϲ�㣬��Ϸ����
				b�´��ˣ����ߴ���С�������£�֪����
			3.��Ϸһֱ��*/


//void	menu()
//{
//	printf("********************************\n");
//	printf("***********1.play***************\n");
//	printf("***********0.exit***************\n");
//}
//void	game()
//{
//	/*
//	1.������һ�������
//	rand������0-32727֮�������*/
//
//	int ret = rand()% 100 + 1;	//%100��������0-99Ȼ��+1����Χ����1-100��
//	/*printf("%d\n", ret);*/   //����
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�>\n");
//		scanf("%d", &guess);
//		if (guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));		//������ɲ��ظ� srand��Ҫ����
//	int input = 0;
//	do
//	{
//		
//		menu();
//		printf("��ѡ��>\n");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



