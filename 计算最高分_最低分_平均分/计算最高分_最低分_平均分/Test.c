#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d", &n);
	double* arr = (double*)malloc(sizeof(double)*n);
	for (int i = 0; i<n; i++)
		scanf("%lf", &arr[i]);
	double max = arr[0], min = arr[0], average = 0, sum = 0;
	for (int i = 0; i<n; i++)
	{
		if (max<arr[i])
			max = arr[i];
		if (min>arr[i])
			min = arr[i];
		sum += arr[i];
	}
	average = sum / n;
	printf("%.2lf %.2lf %.2lf", max, min, average);
	return 0;
}