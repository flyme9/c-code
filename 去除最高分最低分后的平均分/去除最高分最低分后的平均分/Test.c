#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[7] = { 0 };
	double sum = 0;
	for (int i = 0; i<7; i++)
		scanf("%d", &arr[i]);
	int max = arr[0];
	int min = arr[0];
	//找到最大值与最小值
	for (int i = 0; i<7; i++)
	{
		if (max<arr[i])
			max = arr[i];
		if (min>arr[i])
			min = arr[i];
	}
	for (int i = 0; i<7; i++)
	{
		sum += arr[i];
	}
	printf("%.2lf\n", (sum - max - min) / 5.0);
	return 0;
}