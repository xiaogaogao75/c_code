//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
	

			//������Ϊ��������
//void bubble_sort(int arr[] ,int sz)
//{
//	//ȷ������
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		//��һ��
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				//����	
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0,65,45,4,21 };
//	//����Ϊ����--ð������
//	//����Ԫ�ظ���		
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	return 0;
//}
//��������ʲô
//����������Ԫ�صĵ�ַ
//��������
//1. sizeof(������)-��������ʾ��������-��������������ֽ�
//2.&������-��������ʾ��������-ȡ��������������ĵ�ַ

//int main()
//{
//	int arr[] = { 0 };
//	int sz = sizeof(arr);
//	printf("%d\n", sz); 
//	printf("%p", &arr[0]);
//	printf("%p", arr);		//����������Ԫ�صĵ�ַ
//	return 0;
//}