#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
				//��ӡ1000��2000������
				/*����
				1.�ܱ�4�������Ҳ���100����
				2.�ܱ�400����
				*/
//int main()
//{
//	int	y = 0;
//	int count = 0;
//	for ( y = 1000; y <= 2000; y++)
//	{
//		if (((y%4 == 0) && (y%100 != 0)) || (y%400 == 0))
//		{
//			printf("%d ",y);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}

				//��ӡ100-200֮�������
				/*���� ֻ�ܱ�1�ͱ�����������
				*/

//int	main()
//{
//	int i = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		int	j = 0;
//		for ( j = 2; j <i ; j++)
//		{
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (i==j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

			//goto ����ʹ��
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	//��ѭ��
//	goto flag;
//	return 0;
//}



//#include <string.h>	
//#include <stdlib.h>

		/*�ػ�����
		ֻҪ����������������1�����ڹػ���������������ȡ��
		shotdown -s -t 60		60s��ػ�
		shotdown -a			ȡ���ػ�*/
//int	main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬������1�����ڹػ���������������ȡ��\n");
//	scanf_s("%s", input);
//	if (strcmp(input,"������")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


