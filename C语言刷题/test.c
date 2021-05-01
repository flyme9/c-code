#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	for (n = 10000; n<100000; n++)
//	{
//		int sum = 0;
//		for (int j = 10; j <= 10000; j *= 10)
//		{
//			sum += ((n / j)*(n%j));
//		}
//		if (sum == n)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}

//void mer(int* nums1, int m, int* nums2, int n)
//{
//	int pnum1 = m - 1;//指向num1数组最后一个元素下标
//	int pnum2 = n - 1;//指向num2数组最后一个元素下标
//	int end = m + n - 1;//指向合并后num1数组最后一个元素下标
//	while (pnum2 >= 0 && pnum1 >= 0)
//	{
//		if (nums1[pnum1] <= nums2[pnum2])
//		{
//			//如果nums2的数大于nums1，则将最后一个下标放置这个数
//			nums1[end] = nums2[pnum2];
//			//printf("%d ", nums1[end]);
//			pnum2--;
//			end--;
//		}
//		else
//		{
//			//如果nums1的数大于nums2，则将最后一个下标放置这个数
//			nums1[end] = nums1[pnum1];
//			//printf("%d ", nums1[end]);
//			pnum1--;
//			end--;
//		}
//	}
//	if (pnum1 < 0)
//	{
//		for (int i = 0; i < pnum2; i++)
//		{
//			nums1[i] = nums2[i];
//			//printf("%d ", nums1[pnum1]);
//		}
//	}
//	
//}
//int main()
//{
//	int num1[50] = { 1,2,3 };
//	int num2[] = { 2,5,6 };
//	mer(num1, 3, num2, 3);
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", num1[i]);
//	}
//	return 0;
//}

//int removeElement(int* nums, int numsSize, int val)
//{
//	int k = 0;
//	for (int i = 0; i<numsSize; i++)
//	{//如果指向下标位置的数不是val，则将这个数赋值到k指向的下标
//		if (nums[i] != val)
//			nums[k++] = nums[i];
//	}
//	//循环结束后，k指向数组最后一个元素下标
//	return k;
//}
//int main()
//{
//	int arr[] = { 3,2,2,3 };
//	int val = 2;
//	int k = removeElement(arr, sizeof(arr)/sizeof(arr[0]),val);
//	for (int i = 0; i < k; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//从键盘输入n个学生成绩（不超过40个），输出每组排在前五高的成绩
//#include<stdio.h>
//int main()
//{
//	int n = 0, arr[40];
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i<n - 1; i++)
//	{
//		for (int j = 0; j<n - 1 - i; j++)
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int main()
//{
//	char arr[100] = { 0 };
//	int count = 0;
//	gets(arr);
//	int i = 0;
//	while (arr[i] != '0')
//	{
//		if (arr[i] == 'A')
//			count++;
//		else if (arr[i] == 'B')
//			count--;
//		i++;
//	}
//	if (count>0)
//		printf("A\n");
//	else if (count == 0)
//		printf("E\n");
//	else
//		printf("B\n");
//	return 0;
//}

//字母大小写转换
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		else if (isupper(ch))
//			printf("%c\n", tolower(ch));
//		getchar();
//	}
//	return 0;
//}

//判断三角形
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	while (~(scanf("%d %d %d", &a, &b, &c)))
//	{
//		if ((a + b>c) && (a + c>b) && (b + c>a))
//		{
//			if (a == b&&b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (((a == b) && (b != c)) || ((a == c) && (c != b)) || ((b == c) && (c != a)))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}

//判断BMI
//int main()
//{
//	int w = 0, h = 0;
//	while (~scanf("%d %d", &w, &h))
//	{
//		float bmi = w / (h*h / 100.0 / 100.0);
//		if (bmi<18.5)
//			printf("Underweight\n");
//		else if (bmi >= 18.5&&bmi <= 23.9)
//			printf("Normal\n");
//		else if (bmi>23.9&&bmi <= 27.9)
//			printf("Overweight\n");
//		else
//			printf("Obese\n");
//	}
//	return 0;
//}

//计算一元二次方程
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c;
//	while (~scanf("%lf %lf %lf", &a, &b, &c))
//	{
//		if (a != 0)
//		{
//			double disc = b*b - 4 * a*c;
//			if (disc>0.0)
//			{
//				printf("x1=%.2lf;x2=%.2lf\n",
//					(-b - sqrt(disc)) / (2 * a), (-b + sqrt(disc)) / (2 * a));
//			}
//			else if (disc<0.0)
//			{
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",
//					(-b) / (2 * a), sqrt(-disc) / (2 * a), (-b) / (2 * a), sqrt(-disc) / (2 * a));
//			}
//			else
//				printf("x1=x2=%.2lf\n", (-b) / (2 * a));
//		}
//		else
//			printf("Not quadratic equation");
//	}
//	return 0;
//}

//获得月份天数
//#include<stdio.h>
//int main()
//{
//	int y, m, d[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (~scanf("%d %d", &y, &m))
//	{
//		int day = d[m - 1];
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 100 == 0))
//		{
//			if (m == 2)
//				day++;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}

//简单的计算器
//#include<stdio.h>
//int main()
//{
//	double n1, n2;
//	char op = 0;
//	while (~scanf("%lf%c%lf", &n1, &op, &n2))
//	{
//		switch (op)
//		{
//		case '+':
//			printf("%.4lf+%.4lf=%.4lf\n", n1, n2, n1 + n2);
//			break;
//		case '-':
//			printf("%.4lf-%.4lf=%.4lf\n", n1, n2, n1 - n2);
//			break;
//		case '*':
//			printf("%.4lf*%.4lf=%.4lf\n", n1, n2, n1*n2);
//			break;
//		case '/':
//			if (n2 == 0)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else
//			{
//				printf("%.4lf/%.4lf=%.4lf\n", n1, n2, n1 / n2);
//			}
//			break;
//		default:
//			printf("Invalid operation!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i<n; i++)
//		{
//			for (int j = 0; j<n - 1 - i; j++)
//			{
//				printf("  ");
//			}
//			for (int k = 0; k <= i; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i<n; i++)
//		{
//			for (int j = 0; j<n - 1-i; j++)
//			{
//				printf(" ");
//			}
//			for (int k = 0; k<=i; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i<n; i++)
//		{
//			for (int k = 0; k < i; k++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j<n -i; j++)
//			{
//				printf("* ");
//
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i<=n; i++)
//		{
//			for (int k = 0; k < n - i; k++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <=i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int k = 0; k < i+1; k++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < n-i ; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int k = i; k<=n; k++)
//			{
//				printf("* ");
//			}
//			for (int j = n - i; j <= n; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i <= n; i++)
//		{
//			for (int k = 0; k <= i ; k++)
//			{
//				printf("* ");
//			}
//			for (int j = n - i; j >= 1; j--)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i <= n; i++)
//		{
//			for (int k = 0; k<n - i; k++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int k = 0; k <= i; k++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j <= n-1-i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		for (int i = 0; i<n; i++)
		{
			for (int k = 1; k<=i; k++)
			{
				printf(" ");
			}
			printf("*");
			for (int k = 0; k < n - i; k++)
			{
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}