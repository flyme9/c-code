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
//#define reg register //Ϊ register����ؼ��֣�����һ����̵�����
//#define do_forever for(;;) //�ø�����ķ������滻һ��ʵ��
//#define CASE break;case //��дcase����ʱ���Զ��� breakд�ϡ�
//// �������� stuff���������Էֳɼ���д���������һ���⣬ÿ�еĺ��涼��һ����б��(���з�)��
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
//	//�滻֮������ɣ�max = (x++)>(y++)?(x++):(y++)
//	//�괫�����滻��ȥ�������Ҳ����м��㣬���������������Ԥ�ڵĽ��
//	printf("%d\n", max);
//	printf("%d\n", x);
//	printf("%d\n",y);
//	return 0;
//}

//��������
#define OS_UNIX
#define OPTION1
int main()
{
	//1.��֧��������
#if 1
	//����Ϊ�棬ִ����䣬����ִ��
	printf("hello world\n");
#endif

	//2.���֧��������
#if 10>20
	printf("hello world\n");
#elif 10<20
	printf("hello world\n");
#else
	printf("hello world\n");
#endif

	//3.�ж��Ƿ񱻶���
	//���������DEBUG����ִ�����
#if defined DEBUG
	printf("hello world\n");
#endif
#ifdef DEBUG
	printf("hello world\n");
#endif
	//���û�ж�����DEBUG����ִ�����
#if !defined DEBUG
	printf("hello world\n");
#endif
#ifndef DEBUG
	printf("hello world\n");
#endif

	//4.Ƕ��ָ��
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