#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ѡ�����
//�򵥵�ѡ��
//int main()
//{
//	int input = 0;
//	printf("��������Ů��1/0��?\n");
//	scanf("%d", &input);
//
//		if (input == 1)
//			printf("��\n");
//		else
//			printf("Ů\n");
//
//	return 0;
//}



//�򵥵�ѭ�����

//int main()
//{
//	int line = 0;
//	while (line<30000)
//	{
//		printf("д����\n", line);
//		line++;
//	}
//	if (line==30000)
//	{
//		printf("��Ϊ��ţ");
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
// }
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//int sum = num1 + num2; �Ǻ���
//	// �����Ľ����ʽ :����������ʹ��ģ�黯������󹤳̵Ĵ��븴��
//	int sum = Add(num1, num2);
//
//	printf("%d\n",sum);
//
//	return 0;
//}

//int main()
//{
//	//���飺һ����ͬ���͵�Ԫ�ؼ���
//	//�����������±���ʵ�
//	//��һ��Ԫ���±���0�� arr[0]=1
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int	i = 0;
//	while (i<10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
///*	char ch[5] = { 'a','b','c'};*///����ȫ��ʼ����ʣ��Ĭ��Ϊ0
//	return 0;
//}

	//1.������������+ -  * / %(���ࣩ 
	//2.��λ��������<< >>
	//3.λ��������
	// & ��λ��
	// | ��λ��
	// ^ ��λ���
	// 4.��ֵ��������=  +=  -=  *=  /=  ^=  |=  >>=  <<=
//������
//int main()
//{

	//
//	int a = 9 / 2;
//	float b = 9 / 2.0;
//	printf("%d\n", a);
//	printf("%f\n", b);
//	return 0;
//}

//int	main()
//{
//	int a = 2;
//	int	b = a << 1;//���Ʋ����������ƶ�������λ ����4
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	//!ȡ�෴���
//	if (true)
//	{
//		//���Ϊ�棬����
//	}
//	if (!true) 
//	{
//		//���Ϊ�٣�����
//	}
//	return 0;
//}
//sizeof�ǲ��������ſ�ʡ�ԣ������С����λ�ֽ��ǵ�Ŀ������



		//��Ŀ�������������text_5��

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a); //��λȡ���������ƣ�  ������Ӧ����1�����������ڴ��д洢���ǲ���
//	return 0;
// }


//int main()
//{
//	int	a = 10;
//	int b = ++a;	//++ǰ�á�����++��ʹ��	
//	printf("%d\n", b);
//	printf("%d\n", a);
//	
//	
//	int	c = 10;
//	int d = c++; 	//����++������ʹ�ú�++	
//	printf("%d\n", d);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}


		/*�߼�������
		&&�߼��루���ң�
		||�߼��򣨻��ߣ�
		*/

//��Ŀ������ ����
//exp1? exp2: exp3
//exp1���� ��exp2���㣬�������ʽ�Ľ����exp2�Ľ��
//exp1������ ��exp3���㣬�������ʽ�Ľ����exp3�Ľ��

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	/*if (a > b)
//		max = a; 
//	else
//		max = b;*/
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}