#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//包含一个stdio.h的头文件
//int 是整型的意思  main前面的int表示函数调用返回一个整型
//int main()	//主函数-main函数是程序的入口，一个工程有且仅有一个
//{
//	//第一个C语言程序
//	//在屏幕上输出Hello word
//	printf("Hello word\n");
//	//printf是打印函数，它是一个库函数-C语言本身提供给我们使用的函数
//	//所以使用时需要包含头文件-#include
//
//
//	//计算数据各种数据类型的大小
//	//sizeof 计算操作数的类型长度（它的单位是字节）
//	//一个字节 = 八个比特位
//	printf("%d\n", sizeof(char));			//字符型
//	printf("%d\n", sizeof(short));			//短整型
//	printf("%d\n", sizeof(int));			//整型
//	printf("%d\n", sizeof(long));			//长整型
//	printf("%d\n", sizeof(long long));		//更长的整型
//	printf("%d\n", sizeof(float));			//单精度浮点型
//	printf("%d\n", sizeof(double));			//双精度浮点型
//	printf("%d\n", sizeof(long double));	//双精度浮点型
//	
//	//类型的使用
//	char ch = 'w';
//	int weight = 120;
//	float pi = 3.14;
//
//	
//	
//	return 0;//返回0
//}

//变量与常量
//int global = 2019;//全局变量
//int main()
//{
//	int local = 2018;//局部变量
//	int global = 20;//局部变量
//	int sum = 0;//局部变量
//	printf("使用前：%d %d\n", local, global);
//	scanf("%d%d", &local, &global);
//	sum = local + global;
//	printf("使用后：%d %d\n", local, global);
//	printf("相加后：%d\n",sum);
//	return 0;
//}
//#define MAX 100 //#defind定义的标识符常量
//enum Sex
//{
//	//以下三个是枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	3.14;//字面常量
//	const float pai = 3.14f;//const修饰的常变量
//	pai = 6.28;//pai是const修饰的常变量，重新赋值会报错
//
//	return 0;
//}

////字符串求长度
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//转义字符
//int main()
//{
//	printf("未使用转移字符：c:\code\test.\321.c\n");
//	printf("使用转移字符后：c:\\code\\test.\\321.c\n");
//	return 0;
//}

//分支语句
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a == b)
//	{
//		printf("两个数一样大\n");
//	}
//	else if (a > b)
//	{
//		printf("a大于b\n");
//	}
//	else
//	{
//		printf("a小于b");
//	}
//	return 0;
//}

//循环语句 while
//int main()
//{
//	printf("学习C语言\n");
//	int line = 0;
//	while (line <= 20000)
//	{
//		line++;
//		printf("每天努力敲代码 %d\n",line);
//	}
//	if (line>20000)
//		printf("获得好工作\n");
//	return 0;
//}

//函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//指针的取出、存储和使用
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}

//计算指针变量的大小
//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}

//结构体
struct Stu//struct是结构体的关键字
{//以下是结构体成员
	char name[20];//名字
	int age; //年龄
	char sex[5]; //性别
	char id[15]; //学号
};
//结构的使用
int main()
{
	//打印结构体信息
	struct Stu s = { "张三",20,"男", "20180101" };
	//.为结构成员（对象）访问操作符
	printf("name = %s age = %d sex = %s id = %s\n",
		s.name, s.age, s.sex, s.id);
	//->为结构成员（指针）访问操作符
	struct Stu *ps = &s;
	printf("name = %s age = %d sex = %s id = %s\n",
		ps->name, ps->age, ps->sex, ps->id);
	return 0;
}