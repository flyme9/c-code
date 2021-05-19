#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}
int main()
{
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i<n; i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(n), cmp_int);
	for (int i = 0; i<n; i++)
	{
		if (arr[i] != arr[i + 1])
			printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}