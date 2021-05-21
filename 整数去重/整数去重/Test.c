#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, tmp = 1;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int)*n);
	if (arr != NULL)
	{
		for (int i = 0; i<n; i++)
		{	
			scanf("%d", &arr[i]);
			for (int j = 0; j<i; j++)
			{
				if (arr[i] == arr[j])
				{
					tmp = 0;
					break;
				}
			}
			if (tmp)
				printf("%d ", arr[i]);
			tmp = 1;
		}
	}
	return 0;
}