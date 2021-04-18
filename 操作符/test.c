#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	
//int main()
//{	//算数操作符
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
//	c = b / a;//两个操作数为整数，进行整数运算
//	printf("%d \n", c);
//	c = b / d;//有一个为浮点型，进行浮点数运算
//	printf("%f \n", (double)c);
//	c = b%a;
//	printf("%d \n", c);
//	return 0;
//}

//int main()
//{	//移位操作符
//	int a = -1;
//	b = a << 1;//左移
//	printf("%d\n", b);
//	int b = a >> 1;//右移
//	printf("%d\n", b);
//	//整数的二进制表示有：原码、反码、补码
//	//存储到内存的是补码
//	//-1的原码、反码、补码
//	//10000000000000000000000000000001 ->原码
//	//11111111111111111111111111111110 ->反码 原码按位取反
//	//11111111111111111111111111111111 ->补码 反码+1
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

//不创建临时变量实现两个数的交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//加减法
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n",a,b);
//	//异或的方法
//	a = a^b;//011 101 异或后a=110
//	b = a^b;//110 101 异或后b=011
//	a = a^b;//110 011 异或后a=101
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//求一个整数存储在内存中的二进制中1的个数
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
//	printf("二进制中1的个数有：%d\n", count);
//
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("二进制中1的个数有：%d\n", count);
//	return 0;
//}

//int main()
//{
//	short a = 1;
//	int b = 2;
//	int c = 0;
//	c = a + !b;//b如果为真则反操作为0，为假反操作为1
//	printf("%d\n", c);
//	printf("%d\n", sizeof(a = a - b));
//	//sizeof()括号内不参与计算
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
//	//arr传参，传过来的是首元素地址,
//	//所以计算的是地址，地址在32位机器上是4字节大小
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//	//ch传参，传过来的是首元素地址,地址在32位上是4字节大小
//	//所以计算的是地址，地址在32位机器上是4字节大小
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	//这里数组名表示整个数组，所以计算的是整个数组的大小
//	printf("%d\n", sizeof(ch));
//	//这里数组名表示整个数组，所以计算的是整个数组的大小
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//a=0;为假，后面不执行，a++后置，先用后自增
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//判断两个数中较大值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	//使用条件表达式判断
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
//	printf("函数调用\n");
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
//	arr[9] = 2;//下标引用
//	test();//函数调用
//	struct Stu S1= { "张山",20,"男",123456 };
//	struct Stu *ps;
//	ps = &S1;
//	//结构成员(对象)访问
//	printf("%s %d %s %d\n", S1.name, S1.age, S1.sex, S1.ID);
//	//结构成员(指针)访问
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
	//涉及到计算，所以发生整型提升，所以大小是4个字节
	printf("%u\n", sizeof(!c));
	return 0;
}