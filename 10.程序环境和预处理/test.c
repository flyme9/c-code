#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("file:%s    line:%d    date:%s    time:%s\n",
//			__FILE__, __LINE__, __DATE__, __TIME__);
//	}
//	return 0;
//}

//#define MAX 1000
//#define reg register //为 register这个关键字，创建一个简短的名字
//#define do_forever for(;;) //用更形象的符号来替换一种实现
//#define CASE break;case //在写case语句的时候自动把 break写上。
//// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//date:%s\ttime:%s\n" ,__FILE__,__LINE__ , __DATE__,__TIME__ )
//int main()
//{
//	DEBUG_PRINT;
//	return 0;
//}

//#define MAX 1000;
//#define MAx 1000
//int main()
//{
//	int max = MAX;
//	printf("%d",max);
//	return 0;
//}

//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//int main()
//{
//	int a = 10;
//	PRINT(a);
//	int b = 20;
//	PRINT(b);
//	return 0;
//}

//#define CAT(X,Y) X##Y
//int main()
//{
//	int Class84 = 2019;
//	printf("%d\n", CAT(Class, 84));
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int x = 10, y = 11;
//	int max = MAX(x, y);
//	printf("%d\n", max);
//	max = MAX(x++, y++);
//	//替换之后代码变成：max = (x++)>(y++)?(x++):(y++)
//	//宏传参是替换进去，并将且不进行计算，产生结果不是我们预期的结果
//	printf("%d\n", max);
//	printf("%d\n", x);
//	printf("%d\n",y);
//	return 0;
//}

//条件编译
#define OS_UNIX
#define OPTION1
int main()
{
	//1.分支条件编译
#if 1
	//条件为真，执行语句，否则不执行
	printf("hello world\n");
#endif

	//2.多分支条件编译
#if 10>20
	printf("hello world\n");
#elif 10<20
	printf("hello world\n");
#else
	printf("hello world\n");
#endif

	//3.判定是否被定义
	//如果定义了DEBUG，则执行语句
#if defined DEBUG
	printf("hello world\n");
#endif
#ifdef DEBUG
	printf("hello world\n");
#endif
	//如果没有定义了DEBUG，则执行语句
#if !defined DEBUG
	printf("hello world\n");
#endif
#ifndef DEBUG
	printf("hello world\n");
#endif

	//4.嵌套指令
#if defined OS_UNIX
	#ifdef OPTION1
		printf("hello world\n");
	#endif
	#ifndef OPTION
		printf("hello world\n");
	#endif
#elif !defined(OS_MSDOS)
	#ifdef OPTION2
		printf("hello world\n");
	#endif
#endif 
	return 0;
}