#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d ", sizeof(arr));//sizeof->������������顢���͵Ĵ�С�����ڲ�����
//	printf("%d ", strlen(arr));//strlen->���ַ������ȣ�ֻ����ַ��������ڿ⺯����Ҫ����ͷ�ļ�
//}

//int main()
//{
//	int arr[10] = { 0 };//����Ĳ���ȫ��ʼ��
//						//���������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���������ݸ�ֵ,������ʹ���±������ʵģ��±��0��ʼ�����ԣ�
//	int i = 0;//���±�
//	for (i = 0; i<10; i++)//����д10���ò��ã�
//	{
//		arr[i] = i;
//	}
//	//������������
//	for (i = 0; i<10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//}

//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			arr[i][j] =i+j;
//			//printf("%-2d ", arr[i][j]);
//			printf("%p\n", &arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void _bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	_bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}

