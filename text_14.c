#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

			//�ж�100-200֮�������

//int is_primise(int n)
//{
//	int j = 0;
//	for ( j = 2; j < sqrt(n); j++)		//sqrt�ǿ�ƽ������˼�˴������Ż��ˣ�
//	{
//		//2->n-1֮�����
//		if (n % j == 0)
//			return 0;
//	}
//	return 1; 
//}										//returnֻ�ܷ���1��ֵ����������������
//int main()
//{
//	int i = 0;
//	for ( i = 100; i < 200; i++)
//	{
//		//�ж��Ƿ�Ϊ����
//		if ((is_primise(i))==1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



			//�ж�1000��2000������
//�����д����������Ĭ��int����
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else								//�����귵��1�����Ƿ���0
//		return 0;
//}
//
//int main()
//{
//	int y = 0;
//	for ( y = 1000; y < 2000; y++)
//	{
//		if ((is_leap_year(y))==1)		//�����귵��1�����Ƿ���0
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}

			//���ֲ���
//int mid_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int	arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ�����λ���±�
//	//�Ҳ�������-1
//	int ret = mid_search(arr, key, sz);
//
//	if (ret==-1)
//	{
//		printf("�Ҳ���\n", ret);
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d", ret);
//	}
//
//	return 0;
//}

			//����һ��ֵ��ÿ��num+1
//void add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//
//	add(&num);
//	printf("%d \n", num);	//1
//
//	add(&num);
//	printf("%d \n", num);//2
//
//	add(&num);
//	printf("%d \n", num);//3
//	return 0;
//}


			//������Ƕ������ʽ����
/*
1.�����������
2.���Ե��ö������
*/
			//��ʽ����
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d", strlen("abc"));
//	//������ӡ������Ļ���ַ��ĸ���
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
			//�����������붨��
/*
1.����ͷ�ļ���д�붨��  eg��int sum(int x,int y);
2.����Դ�ļ���д�뺯��ִ�д���
3.�ú�����ʱ����Ҫ����ͷ�ļ� #include "sum.h"
4.Դ�ļ���ͷ�ļ���ͬ��
*/

			//ʹ�þ�̬��
/*
����
#pragma comment��lib,"sum.lib"��
Ȼ������sum.h�ļ�

*/