//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <string.h>
			//����ü������ֵ�λ����
//int Digisum(int n)
//{
//
//	if (n > 9)
//	{
//		return Digisum(n / 10) + n % 10;
//	}  
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 1729;
//	int sum = Digisum(num);
//	printf("%d", sum);
//
//	return 0;
//}
			//ʵ��һ��n��k�η����õݹ�

//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 /  (Pow(n, -k));	//����ͬ��ʱ��Ҫ������ȼ���-k����Ϊ���븺��Ȼ�󸺸�����
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}






			//һά����
//int main()
//{
	//int arr[8];	��ʽ������ ����[Ԫ�ض���(���Բ�д)]
	//int arr[n];   �����ԭ����vs����汾��֧�ֱ䳤����
	//int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };  //��ȫ��ʼ��
	//int arr2[] = { 1,2,3,4,5,6 };	//����ȫ��ʼ�����߸����ֺ����Ϊ��
	//char ch1[] = { "bit" };
	//[b i t \0]
	//char ch2[] = { 'b','i','t' };
	//[b i t]û��\0������Ѱ�ң�\0�ǽ����ı�־
	//printf("%s\n", ch1);
	//printf("%s\n", ch2);
//	return 0;
//}

//int main()
//{	
//	//int arr[10] = { 0 };
//	//arr[4] = 5;//[]�±����ò�����	
//	//%p����ʽ��ַ��ӡ-16����
//	//һά�������ڴ���������ţ�
//	//���������±���������ַ�ɵ͵��߱仯��
//
//	int arr[10] = { 0 };
//	int i = 0; 
//	for ( i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//һά�������ڴ���������ţ�
//	//���������±���������ַ�ɵ͵��߱仯��
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}

			//��ά����
//int main()
//{
//	//����
//	//int arr[3][4];//����һ���������е����飬ÿ��Ԫ����int����
//	//��ʼ��	����ȫ��ʼ��������һ��
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };  �����µ�һ�з�12�����з�34�����з�56
//	//int arr[][4] = { {1,2},{3,4},{5,6} };		��ά����ֻ���п���ʡ�� 
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("-------��ά�������ڴ��еĴ洢-------");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i , j , &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("-------��ά�������ڴ���Ҳ���������-------\n");
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for ( i = 0; i < 12; i++)
//	{
//		printf("%d  ", *p);
//		p++;
//	}
//	return 0;
//}