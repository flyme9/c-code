#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, count = 0, sum = 0;
	scanf("%d", &n);
	int arr[10][10];
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (arr[i][j] == 0)
			{
				count++;
			}
		}
	}
	if (count == (n*(n - 1)) / 2)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}