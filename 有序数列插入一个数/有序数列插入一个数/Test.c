#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, count = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int)*n+1);
	if (arr != NULL)
	{
		for (int i = 0; i<n; i++)
			scanf("%d", &arr[i]);
		int k;
		scanf("%d", &k);
		for (int i = 0; i<n; i++)
		{//�ҵ�k�����λ��
			if (arr[i]<k)
				count++;
		}
		for (int i = n; i>count; i--)
		{//Ų�����ݣ��Ӻ���ǰŲ
			arr[i] = arr[i - 1];
		}
		arr[count] = k;//��countλ�ø�k
		for (int i = 0; i <= n; i++)
		{//���
			printf("%d ", arr[i]);
		}
	}
	return 0;
}