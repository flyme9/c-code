#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	
#include<string.h>	
#include<math.h>
//int main()
//{
//	char arr_1[] = "hello";
//	char arr_2[10] = "******";
//	printf("%s", strcpy(arr_2, arr_1));//strcpy->�ַ�����������
//	return 0;
//}

//int Add(int x, int y)
//{
//	return (x + y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	return 0;
//}

//дһ�����������Խ����������ͱ���������
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num_1 = 20;
//	int num_2 = 30;
//	printf("����ǰ��num_1 = %d num_2 = %d\n", num_1, num_2);
//	Swap(&num_1, &num_2);
//	printf("������num_1 = %d num_2 = %d\n", num_1, num_2);
//	return 0;
//}

//дһ�����������ж�һ�����ǲ���������
//int Is_Prime(int n)
//{
//	int i;
//	for (i = 2; i < sqrt(n); i++)
//	{
//		if (n%i == 0)
//			break;
//	}
//	if (i > sqrt(n))
//		return n;
//	else
//		return 0;
//}
//int main()
//{
//	int n;
//	int i = 0;
//	int ret = 0;
//	printf("��������Ҫ���������:>");
//	scanf("%d", &i);
//	for (n = 2; n <= i; n++) 
//	{
//		
//		if (Is_Prime(n))
//		{
//			printf("%-5d", n);
//			ret++;
//		}
//	}
//	printf("\nret = %d", ret);
//	return 0;
//
//}

//дһ�������ж�һ���ǲ�������
//int Is_Leap_year(int year)
//{
//	if (((year % 4) == 0) && ((year % 100) != 0) || ((year % 400) == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int leap_ = 0;
//	scanf("%d", &year);
//	if (Is_Leap_year(year) == 1)
//	{
//		printf("�����У�%d", year);
//	}
//	return 0;
//}

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	print(num);
//	return 0;
//}

//��д��������������ʱ���������ַ����ĳ��ȡ�
//int My_strlen(char* str)
//{
//	if(*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + My_strlen(str + 1);
//	}
//}
//int main()
//{
//	char arr[] = "Hello";
//	int len = My_strlen(arr);
//	printf("%d ", len);
//	return 0;
//}

//�ݹ������
//��n�Ľ׳�
//int Factorial_1(int n)
//{
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Factorial_2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Factorial_2(n-1);
//}
//int main()
//{
//	int n = 0, ret;
//	scanf("%d", &n);
//	ret = Factorial_1(n);
//	printf("%d \n", ret);
//	ret = Factorial_2(n);
//	printf("%d \n", ret);
//	return 0; 
//}

//���n��쳲�������
//int Fib_1(int n)//�ݹ鷽ʽ
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib_1(n - 1) + Fib_1(n - 2);
//}
//int Fib_2(int n)//������ʽ
//{
//	int result;
//	int pre_result=1;
//	int next_result=1;
//	result = next_result = 1;
//	while (n > 2)
//	{
//		result = pre_result + next_result;
//		pre_result = next_result;
//		next_result = result;
//		n--;
//	}
//	return result;
//}
//int main()
//{
//	int n = 0;
//	int ret;
//	scanf("%d",&n);
//	ret = Fib_2(n);
//	printf("ret = %d", ret);
//	return 0;
//}
