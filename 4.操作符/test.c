#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	
//int main()
//{	//����������
//	int a = 10;
//	int b = 24;
//	int c = 0;
//	double d = 2.2;
//	c = a + b;
//	printf("%d \n", c);
//	c = a - b;
//	printf("%d \n", c);
//	c = a*b;
//	printf("%d \n", c);
//	c = b / a;//����������Ϊ������������������
//	printf("%d \n", c);
//	c = b / d;//��һ��Ϊ�����ͣ����и���������
//	printf("%f \n", (double)c);
//	c = b%a;
//	printf("%d \n", c);
//	return 0;
//}

//int main()
//{	//��λ������
//	int a = -1;
//	b = a << 1;//����
//	printf("%d\n", b);
//	int b = a >> 1;//����
//	printf("%d\n", b);
//	//�����Ķ����Ʊ�ʾ�У�ԭ�롢���롢����
//	//�洢���ڴ���ǲ���
//	//-1��ԭ�롢���롢����
//	//10000000000000000000000000000001 ->ԭ��
//	//11111111111111111111111111111110 ->���� ԭ�밴λȡ��
//	//11111111111111111111111111111111 ->���� ����+1
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	c = a&b;
//	printf("%d\n", c);
//	c = a|b;
//	printf("%d\n", c);
//	c = a^b;
//	printf("%d\n", c);
//	return 0;
//}

//��������ʱ����ʵ���������Ľ���
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//�Ӽ���
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n",a,b);
//	//���ķ���
//	a = a^b;//011 101 ����a=110
//	b = a^b;//110 101 ����b=011
//	a = a^b;//110 011 ����a=101
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//��һ�������洢���ڴ��еĶ�������1�ĸ���
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("��������1�ĸ����У�%d\n", count);
//
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("��������1�ĸ����У�%d\n", count);
//	return 0;
//}

//int main()
//{
//	short a = 1;
//	int b = 2;
//	int c = 0;
//	c = a + !b;//b���Ϊ���򷴲���Ϊ0��Ϊ�ٷ�����Ϊ1
//	printf("%d\n", c);
//	printf("%d\n", sizeof(a = a - b));
//	//sizeof()�����ڲ��������
//	printf("%d\n", ~a);
//	a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//	//arr���Σ�������������Ԫ�ص�ַ,
//	//���Լ�����ǵ�ַ����ַ��32λ��������4�ֽڴ�С
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//	//ch���Σ�������������Ԫ�ص�ַ,��ַ��32λ����4�ֽڴ�С
//	//���Լ�����ǵ�ַ����ַ��32λ��������4�ֽڴ�С
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	//������������ʾ�������飬���Լ��������������Ĵ�С
//	printf("%d\n", sizeof(ch));
//	//������������ʾ�������飬���Լ��������������Ĵ�С
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//a=0;Ϊ�٣����治ִ�У�a++���ã����ú�����
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//�ж��������нϴ�ֵ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	//ʹ���������ʽ�ж�
//	a > b ? a : b;
//	printf("%d\n", (a > b ? a : b));
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a/*1*/, ++a/*2*/, b/*2*/ = a++/*3*/, /*2*/b++/*3*/);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//void test()
//{
//	printf("��������\n");
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	int ID;
//};
//int main()
//{
//	int arr[10] = { 0 };
//	
//	arr[9] = 2;//�±�����
//	test();//��������
//	struct Stu S1= { "��ɽ",20,"��",123456 };
//	struct Stu *ps;
//	ps = &S1;
//	//�ṹ��Ա(����)����
//	printf("%s %d %s %d\n", S1.name, S1.age, S1.sex, S1.ID);
//	//�ṹ��Ա(ָ��)����
//	printf("%s %d %s %d\n", ps->name,ps->age,ps->sex,ps->ID	);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	//�漰�����㣬���Է����������������Դ�С��4���ֽ�
	printf("%u\n", sizeof(!c));
	return 0;
}