#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	
#include<string.h>
#include<Windows.h>
//int main()
//{
//	int age=0;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else if (age >= 18 && age < 66)
//		printf("����\n");
//	else if (age >= 66 && age < 80)
//		printf("����\n");
//	else if (age >= 80 && age < 100)
//		printf("����\n");
//	else
//		printf("��������\n");
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 66)
//			printf("����\n");
//		else if (age >= 66 && age < 80)
//			printf("����\n");
//		else if (age >= 80 && age < 100)
//			printf("����\n");
//		else
//			printf("��������\n");
//	}
//	return 0;
//}

//����else������д��
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
//����else������ĸ���
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//��ϰ -> �ж�1-100֮�������
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i += 2;
//	}
//	return 0;
//}

//switch���
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:
//		printf("����һ\n");
//		break;//��������switch
//	case 2:
//		printf("���ڶ�\n");
//		break;//��������switch
//	case 3:
//		printf("������\n");
//		break;//��������switch
//	case 4:
//		printf("������\n");
//		break;//��������switch
//	case 5:
//		printf("������\n");
//		break;//��������switch
//	case 6:
//		printf("������\n");
//		break;//��������switch
//	case 7:
//		printf("������\n");
//		break;//��������switch
//	default://������������ֵʱ��ִ�и����
//		printf("�������\n");
//		break;
//	}
//	switch (input)
//	{
//	case 1:
//	case 2:	
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;//��������switch
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;//��������switch
//	default://������������ֵʱ��ִ�и����
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//ѭ�����
//int main()
//{	//��ӡ1-10������
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//while�е�break
//int main()
//{	//��ӡ1-10������
//	int i = 1;
//	while (i <= 10)
//	{	//break
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	//�������1 2 3 4
//	return 0;
//}
//while�е�continue
//int main()
//{	//��ӡ1-10������
//	int i = 1;
//	while (i <= 10)
//	{	//break
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	������ѭ��
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//getchar()���ڽ���������ַ� 
//								//EOF --> ��ʾctrl+z ����ֵʱ-1
//		putchar(ch);//��ӡ�ַ����ַ���
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')//���������ַ�����0-9֮�䣬����whileѭ���ж�
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1/*��ʼ��*/; i <= 10/*�ж�*/; i++/*����*/)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	//���1 2 3 4
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	//���1 2 3 4 6 7 8 9 10
//	return 0;
//}
//int main()
//{
//	//����1
//	for (;;)//��ѭ��-->��ѭ��
//	{
//		printf("haha\n");
//	}
//	//����2
//	int x, y;
//	for (x = 0, y = 0; x<2 && y<5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("%d", i);
//	}
//		
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i<10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i<10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<10);
//	return 0;
//}

int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("���Խ���һ���Ӻ�ػ�������������;>");
	scanf("%s", input);
	if (0 == strcmp(input, "852654"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}