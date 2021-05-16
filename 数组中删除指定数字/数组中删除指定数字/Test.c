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
	int k;
	scanf("%d", &k);
	for (int i = 0; i<n; i++)
	{
		if (arr[i] == k)
			continue;
		printf("%d ", arr[i]);
	}
	return 0;
}