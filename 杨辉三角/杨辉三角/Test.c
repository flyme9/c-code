#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[30][30] = { 1 };
	for (int i = 0; i<n; i++)//控制行打印
	{
		for (int j = 0; j <= i; j++)//控制列的打印
		{
			if (j == 0 || j == i)
			{   //如果是边界，则打印1
				arr[i][j] = 1;
				printf("%5d", arr[i][j]);
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];//上一行的这一列的前一个和这列上的数字
				printf("%5d", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}