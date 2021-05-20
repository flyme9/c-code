#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int* reOrderArray(int* array, int arrayLen, int* returnSize) {
	// write code here
	*returnSize = arrayLen;
	//int* arrEven = (int*)malloc(sizeof(int)*arrayLen);//偶数
	int arrEven[10];
	//int* arrOdd = (int*)malloc(sizeof(int)*arrayLen);//奇数
	int arrOdd[10];
	int numOdd = 0, numEven = 0;
	for (int i = 0; i<arrayLen; i++)
	{
		if (array[i] % 2 == 0)//偶数
		{
			arrEven[numEven] = array[i];
			numEven++;
			//continue;
		}
		else//奇数
		{
			arrOdd[numOdd] = array[i];
			numOdd++;
			//continue;
		}
	}
	//合并两个数组
	for (int i = numOdd, j = 0; i<arrayLen; i++, j++)
	{
		arrOdd[i] = arrEven[j];
	}
	return arrOdd;
}
int main()
{
	int arr[] = { 1,2,3,4 };
	int size = 0;
	printf("%d ", *(reOrderArray(arr, 4, &size)));
	printf("%d ", *(reOrderArray(arr, 4, &size)+1));
	printf("%d ", *(reOrderArray(arr, 4, &size)+2));
	printf("%d ", *(reOrderArray(arr, 4, &size)+3));
	return 0;
}