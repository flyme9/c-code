#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, a[10][10], i, j, c = 0, n = 0;
	scanf("%d", &m);
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<m; j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<i; j++)
		{
			if (a[i][j] == 0)
				c++;
		}
	}
	for (i = 1; i<m; i++)
	{
		n += i;
	}
	if (c == n)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}