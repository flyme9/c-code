#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0], min = arr[0];
	for (int i = 0; i<n; i++)
	{
		if (max<arr[i])
			max = arr[i];
		if (min>arr[i])
			min = arr[i];
	}
	printf("%d", max - min);
	return 0;
}