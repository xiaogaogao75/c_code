#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
			//��ʶָ��
//int main()
//{
//
//	int a = 10;
//	printf("%p\n", &a);//%p������ӡ��ַ
//	int* pa = &a;//pa������ŵ�ַ�ģ���c������pa����ָ�����
//	//*˵��pa��ָ�����
//	//int˵��paִ�ж�����int���͵�
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//�����ò���----*pa����ͨ��pa����ĵ�ַ�ҵ�a
//
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(long*));
//	printf("%zd\n", sizeof(long long*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//
//	return 0;
//}

			//��ʶ�ṹ��]
			//�ṹ�������c���Դ����µ�����

//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct stu s={"����",20,85.5};//�ṹ��Ĵ������ʼ��
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ���������Ա����
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n",(*ps).name, (*ps).age, (*ps).score);
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//
//	return 0;
//}



//int  main()
//{
//	int age = 50;
//	if (age < 18)
//		printf("����\n");
//	//else if (18 <= age < 26)
//	//	printf("����\n");//��ӡ����ʱ����
//	else if (age >= 18 && age < 26)
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	return 0;
//}



//int main()
//{
//
//	int a = 0, b = 2;
//	if (a == 1)				//��䲻���������if��elseֱ��û��
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("hehe\n");//elsege�������ifƥ��
//	return 0;
//}
		
			//���������������ж���ż

		
//int main()
//{
//	printf("�����룺");
//	int a ;
//	scanf_s("%d", &a);
//		
//		if (a % 2 == 1)
//			printf("����");
//		else
//			printf("ż��");
//	return 0;
//}
			

		/*���1 - 100�ڵ�����*/
		//д��һ

//int main()
//{
//	int a=0;
//	
//	for(a = 1; a <= 100; a++)
//	{
//		if (a%2==1)
//			printf("%d\n", a);
//		
//	}
//	return 0;
//}

		//д����
		
//int main()
//{
//	int a = 0;
//
//	for (a = 1; a <= 100; a+=2)
//	{
//		/*if (a % 2 == 1)*/
//			printf("%d\n", a);
//
//	}
//	return 0;
//}


		/*swich��֧���ʽ�����֧���ʽ��
		1.swich���������α��ʽ
		2.case������Ϊ���γ���
		3.case��break����������Ҫ��
		4.Ƕ��swichʱ�򿴺������ֵ��ִ������һ�����
		*/

//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
//		break;
//
//	default:
//		printf("�������");
//		break;
//	}
//	return 0;
//}
