#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<Windows.h>
//int main()
//{
//	//���ڴ�����10�����Ϳռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//�ռ俪��ʧ��
//		printf(strerror(errno));
//	}
//	else
//	{
//		//�ռ俪�ٳɹ�
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
//	//�ͷſռ�,���ռ仹��ϵͳ����ָ����Ϊ��ָ�룬�����ɶ�ʹ��
//	free(p);
//	p = NULL;
//	
//	return 0;
//}

//int main()
//{
//	//���ڴ�����10�����Ϳռ�
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
//	//�ͷ��ڴ棬����ָ����Ϊ��ָ��
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
//	//��չ�ڴ�
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
//	//����ڴ濪��ʧ�ܣ�p��ֵ��NULL���ͻ�������
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
//		{//ֻ������10�����Ϳռ䣬ѭ��20�Σ�Խ�����
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
//	//a�Ǿֲ���������ջ����
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	//p����ָ��̬�ڴ��ԭʼλ��
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
//		//ʹ��
//	}
//	free(p);
//	//�ظ��ͷţ�
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
	int arr[];//δ֪��С�����������Ա�������С���Ե���
}st_type;

int main()
{
	//����1
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