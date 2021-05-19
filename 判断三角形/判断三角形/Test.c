#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	while (~scanf("%d %d %d", &a, &b, &c))
	{    //如果是三角形
		if ((a + b>c) && (a + c>b) && (b + c>a))
		{    //等边三角形
			if (a == b&&b == c)
				printf("Equilateral triangle!\n");
			//等腰三角形
			else if ((a == b) && (b != c) || ((a == c) && (c != b)) || ((b == c) && (b != a)))
				printf("Isosceles triangle!\n");
			//其他三角形
			else
				printf("Ordinary triangle!\n");
		}
		//不是三角形
		else
			printf("Not a triangle!\n");
	}
	return 0;
}