#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	while (~scanf("%d %d %d", &a, &b, &c))
	{    //�����������
		if ((a + b>c) && (a + c>b) && (b + c>a))
		{    //�ȱ�������
			if (a == b&&b == c)
				printf("Equilateral triangle!\n");
			//����������
			else if ((a == b) && (b != c) || ((a == c) && (c != b)) || ((b == c) && (b != a)))
				printf("Isosceles triangle!\n");
			//����������
			else
				printf("Ordinary triangle!\n");
		}
		//����������
		else
			printf("Not a triangle!\n");
	}
	return 0;
}