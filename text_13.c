#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
				//����
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "abc" };
//
//	strcpy(arr1, arr2);			//����һ���ַ���
//
//	printf("%s", arr1);
//
//	return 0;
//}


				//�Զ���һ��������1.���ü�������ֵ�����ֵ
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x>y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf_s("%d%d",&a ,& b);
//
//	int max = get_max(a, b);
//	
//	printf("%d", max);
//	return 0;
//}
				//2.�����������α�����ֵ
//�����������ʹ�д��void����ʾ�����������Ҫ�����κ�ֵ��Ҳ����Ҫ���� 
			//������1.������������������a��b�������ָ��ռ䣬����Ҫ*p��Ѱ���������е�a	Swap��Ҳ��Ҫ�õ�ȡ��ַ
//void Swap(int* pa, int* pb)						
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb; 
//	*pb = *pa;
// }
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("�ı�ǰ��a=%d b=%d\n", a, b);
//
//	Swap(&a, &b);		//ȡ��ַ����������
//
//	printf("�ı��a=%d b=%d\n", a, b);
//
//	return 0;
//}