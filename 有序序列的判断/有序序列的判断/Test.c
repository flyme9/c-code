#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, count1 = 0, count2 = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int)*(n + 1));
	for (int i = 0; i<n; i++)
		scanf("%d", &arr[i]);
	for (int i = 1; i<n - 1; i++)
	{	//��С��������
		if (arr[i] <= arr[i - 1] && arr[i] >= arr[i + 1])
			count1++;
		//�Ӵ�С�����
		else if (arr[i]>arr[i - 1] && arr[i]<arr[i + 1])
			count2++;
	}
	//����ͷβ�����б��������������˳�����飬�ͻ���n-2�μ���
	if (count1 == n - 2 || count2 == n - 2)
		printf("sorted\n");
	else
		printf("unsorted\n");
	return 0;
}