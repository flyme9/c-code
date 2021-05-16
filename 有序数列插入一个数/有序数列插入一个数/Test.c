#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, count = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int)*n+1);
	if (arr != NULL)
	{
		for (int i = 0; i<n; i++)
			scanf("%d", &arr[i]);
		int k;
		scanf("%d", &k);
		for (int i = 0; i<n; i++)
		{//找到k插入的位置
			if (arr[i]<k)
				count++;
		}
		for (int i = n; i>count; i--)
		{//挪动数据，从后往前挪
			arr[i] = arr[i - 1];
		}
		arr[count] = k;//将count位置给k
		for (int i = 0; i <= n; i++)
		{//输出
			printf("%d ", arr[i]);
		}
	}
	return 0;
}