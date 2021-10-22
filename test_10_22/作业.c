#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Swap(int *e1, int* e2) {
	int tmp = *e1;
	*e1 = *e2;
	*e2 = tmp;
}
// 堆排序
void AdjustDwon(int* arr, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;//从左孩子开始
	while (child < n)
	{
		//if (child + 1 < n&&arr[child + 1] < arr[child])
		//{
		//	child++;
		//}
		//if (arr[child] < arr[parent])
		//{
		//	//如果孩子比父亲小，交换位置
		//	Swap(&arr[child], &arr[parent]);
		//	parent = child;//将孩子指向的元素给父亲
		//	child = parent * 2 + 1;//下一棵子树的左孩子
		//}
		//else
		//{
		//	break;
		//}

		//建大堆,选出左右孩子中大的那个
		if (child + 1 < n&&arr[child + 1] > arr[child])
			child++;
		if (arr[child] > arr[parent])
		{
			//如果孩子比父亲大，交换位置
			Swap(&arr[child], &arr[parent]);
			parent = child;//将孩子指向的元素给父亲
			child = parent * 2 + 1;//下一棵子树的左孩子
		}
		else
		{
			break;
		}
	}
}
void HeapSort(int* arr, int n)
{
	//建堆
	//从最后一颗子树的非叶节点的子树进行调整
	for (int i = (n - 2) / 2; i >= 0; i--)
		AdjustDwon(arr, n, i);
	//排升序,建大堆
	int end = n - 1;
	while (end > 0)
	{
		//将最大的元素放到最后
		Swap(&arr[0], &arr[end]);
		AdjustDwon(arr, end, 0);
		end--;
	}
}
int main()
{
#if 0


	int n = 0, *arr = 0, max = 0, m = 0, count = 0;
	printf("输入需要的数组长度：");
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int)*n);
	//数组开辟n+1个空间
	if (arr != NULL)
	{
		printf("输入数组中的值：");
		for (int i = 0; i<n; i++)
		{
			scanf("%d", &arr[i]);
		}
		HeapSort(arr, n);
		for (int i = 0; i < n; i++)
		{
			if(arr[i]!=arr[i+1])
				printf("%d ", arr[i]);
		}
	}
#endif // 0

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
				printf("%-5d", arr[i][j]);
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];//上一行的这一列的前一个和这列上的数字
				printf("%-5d", arr[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}