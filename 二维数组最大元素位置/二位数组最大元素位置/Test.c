#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int max = 0, m = 0, n = 0, x = 0, y = 0;
	scanf("%d %d", &m, &n);
	int* arr = (int*)malloc(sizeof(int)*(m*n));
	for (int i = 0; i<m*n; i++)
	{
		scanf("%d", arr + i);
	}
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (max<arr[i*m+j])
			{
				max = arr[i*m + j];
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d", x + 1, y + 1);
	free(arr);
	return 0;
}