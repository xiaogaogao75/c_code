//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <string.h>

			//�жϱ�ѭ����һ��

			//��һ��1-100���ֶ��ٴ�9   %10�Ҹ�λ��9  /10��ʮλ��9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for  (i = 0; i <=100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i/10==9)
//		{
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}

			//����1/-1/2+1/3***-1/100��ֵ����ӡ���			 �ⷨ�ܶ࣡
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//
//	for ( i = 1; i <=100; i++)
//	{
//		if(i%2==0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//
//	for ( i = 1; i <=100; i++)
//	{
//			sum += flag*1.0 / i;
//			flag = -flag;			//ѭ��һ�¾�һ��һ��
//	}
//
//	printf("%lf", sum);
//	return 0;
//}

			//��10�����е������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int i = 0;
//	for ( i = 0; i <10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
			//���9*9�˷���
//int main()
//{
//	int i = 1;
//	for ( i = 1; i <=9; i++)
//	{
//		int	j = 0;
//		for ( j = 1; j < i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);	//%2d�Ǵ�ӡ��λ����λ��	�˴��������
//		}
//		printf("\n");
//	}
//	return 0;
//}

			//����һ��������ӡ������ĳ˷���
//void print_table(int n)
//{
//
//	int i = 0;
//	for ( i = 1; i <=n; i++)
//	{
//		int j = 0;
//		for ( j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	print_table(n);
//	return 0;
//}