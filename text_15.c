#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
	
			//�����ݹ�

//int main()
//{
//	printf("���ݹ�\n");
//	main();
//	return 0;
//}
//
			/*
			ջ���
			�ڴ������
			ջ�����ֲ������������β�
			��������̬�ڴ��������ݿ�
			��̬����ȫ�ֱ�������̬����
			*/

			//����ʲô����ӡʲô
			//�ݹ������1.��������������ÿ�εݹ����֮��Խ��Խ�ӽ������������
//void print(unsigned int n)
//{
//	if (n>9)
//	{
//		print(n / 10);			
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num);		//%u�������޷�������
//	print(num);				//����print����printf
//	return 0;
//}

//int my_strlen(char *str)
//{
//	//�������ʹ������ʱ����
//	//int count = 0;
//	//while (*str !='\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//
//	//��ʹ����ʱ������ʹ�õݹ�
//	if (*str !='\0')
//		return 1 + my_strlen(str + 1);		//����ʹ��++������ǰ���ö��и�����
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "gaoqiang";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
			//����n�Ľ׳ˣ�����
//int	Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}

			//����쳲�������	���������
//int fib(int n)
//{
//	//��ʱ�ݹ����Ч��̫��
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2); 
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d \n", ret);
//	return 0;
//}


//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d \n", ret);
//	return 0;
//}

			//��ŵ������
			// 
			// 
			// 
			//������̨������