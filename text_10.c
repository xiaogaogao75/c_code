#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
		//forѭ��     1.forѭ���е�break��continue
					//2.forѭ���в��ɸı�ѭ��������������ѭ��
//int main()
//{
//	int i = 0;
//	for ( i = 1;i <= 10; i++)//i = 1;��ʼ��i <= 10;�ж���� i++��������
//	{
//		if (i == 5)
//			/*	  break;	*/	//break��for�е�����
//			continue;		//��������ѭ��
//
//		printf("%d", i);
//	}
//	return 0;
//}




//int main()
//{
//	for (;;)
//	{
//		printf("hehe");		//�жϲ���Ϊ���������ѭ��
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int	j = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

		//do while ����ѭ��

//int	main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		//����ѭ����û�н���i++
//		printf("%d ", i);
//
//		i++;
//	} while (i<=10);
//	return 0;
//}





				//��ϰ
				//1.����n�Ľ׳�
//int main()
//{
//	int	i = 0;
//	int j = 0;
//
//	for (i = 1; i == 1; )
//	{
//		int sum = i * j;
//		j++;
//		printf("n=%d\n", sum );
//	}
//	return 0;
//}

				//2.����1!+2!....10!�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; i <=10; n++)
//	{
//		ret = 1;
//		for ( i = 1; i <=n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}


				//3.��һ�����������в��Ҿ���ĳ������n		�۰����
//int	main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr���������в���k������ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���
//
//	int left = 0;
//	int	right = sz-1;
//	
//		
//	while (left<=right)
//	{
//		int	mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���:%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ�����\n");
//	}
//
//	return 0;
//}

				//4.һ�仰���������߿�ʼ��ӡ
//#include <string.h>		//strlen��ͷ�ļ�
//#include <windows.h>	//Sleep��ͷ�ļ�
//int main()
//{
//	char arr1[] = "welcom to my family";
//	char arr2[] = "###################";
//	int left = 0;
//	int	right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);	//����1s
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	return 0;
//}

				//������������

//int	main()
//{
//	int i = 0;
//	char passward[20] = { 0 };
//	for ( i = 0; i <3; i++)
//	{
//		printf("����������:>");
//		scanf_s("%s", passward);
//		//if(passward=="123456")  �������  �����ַ����ıȽϲ���ʹ��==��Ӧ��ʹ��strcmp
//		if (strcmp(passward,"123456")==0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������");
//		}
//	}
//	if (i==3)
//	{
//		printf("����������������˳�����");
//	}
//
//	return 0;
//}