#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[30][30] = { 1 };
	for (int i = 0; i<n; i++)//�����д�ӡ
	{
		for (int j = 0; j <= i; j++)//�����еĴ�ӡ
		{
			if (j == 0 || j == i)
			{   //����Ǳ߽磬���ӡ1
				arr[i][j] = 1;
				printf("%5d", arr[i][j]);
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];//��һ�е���һ�е�ǰһ���������ϵ�����
				printf("%5d", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}