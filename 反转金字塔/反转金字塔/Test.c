#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		for (int j = 0; j<n; j++)
		{
			for (int i = 0; i < j; i++)
			{
				printf(" ");
			}
			for (int k = 0; k<n - j; k++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}