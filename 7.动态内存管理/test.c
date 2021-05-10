#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<Windows.h>
//int main()
//{
//	//向内存申请10个整型空间
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//空间开辟失败
//		printf(strerror(errno));
//	}
//	else
//	{
//		//空间开辟成功
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间,将空间还给系统，将指针置为空指针，两个成对使用
//	free(p);
//	p = NULL;
//	
//	return 0;
//}

//int main()
//{
//	//向内存申请10个整型空间
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf(strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放内存，并将指针置为空指针
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = malloc(40);
//	if (p == NULL)
//	{
//		printf(strerror(errno));
//	}
//	else
//	{
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%-4d ", *(p + i));
//		}
//	}
//	//扩展内存
//	int* ptr = realloc(p, 1000);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 10; i < 1000; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 10; i < 1000; i++)
//		{
//			printf("%-4d ", *(p + i));
//		}
//	}
//	free(ptr);
//	free(p);
//	ptr = NULL;
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	//如果内存开辟失败，p的值是NULL，就会有问题
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf(strerror(errno));
//	}
//	else
//	{
//		int i;
//		for (i = 0; i < 20; i++)
//		{//只开辟了10个整型空间，循环20次，越界访问
//			
//			printf("%d ", *(p + i) = i);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*p = &a;
//	//a是局部变量，在栈区上
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	//p不在指向动态内存的原始位置
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		//使用
//	}
//	free(p);
//	//重复释放，
//	free(p);
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

typedef struct st_type
{
	int i;
	int arr[];//未知大小，柔性数组成员，数组大小可以调整
}st_type;

int main()
{
	//代码1
	int i = 0;
	st_type *p = (st_type*)malloc(sizeof(st_type) + 5 * sizeof(int));
	for (i = 0; i<5; i++)
	{
		p->arr[i] = i;
		printf("%d ", p->arr[i]);
	}
	int* ptr = realloc(p, sizeof(st_type) + 20*sizeof(int));
	if (ptr != NULL)
	{
		p = (st_type*)ptr;
	}
	for (i = 5; i<20; i++)
	{
		p->arr[i] = i;
		printf("%d ", p->arr[i]);
	}
	free(p);
	p = NULL;
	return 0;
}

//int main()
//{
//	int i = 0;
//	st_type* ps = (st_type*)malloc(sizeof(st_type));
//	ps->arr = malloc(5 * sizeof(int));
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}