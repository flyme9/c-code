#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d ", sizeof(arr));//sizeof->计算变量、数组、类型的大小，属于操作符
//	printf("%d ", strlen(arr));//strlen->求字符串长度，只针对字符串，属于库函数需要引入头文件
//}

//int main()
//{
//	int arr[10] = { 0 };//数组的不完全初始化
//						//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：
//	int i = 0;//做下标
//	for (i = 0; i<10; i++)//这里写10，好不好？
//	{
//		arr[i] = i;
//	}
//	//输出数组的内容
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

