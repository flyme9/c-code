#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct s
{
	int a;
	int b;
	int c;
}s;
int main()
{
	int n = 0, count = 0;
	scanf("%d", &n);
	s* s1 = (s*)malloc(sizeof(s)*n);
	if (s1 != NULL)
	{
		for (int i = 0; i<n; i++)
		{
			scanf("%d %d %d", &(s1[i].a), &(s1[i].b), &(s1[i].c));
		}
		for (int i = 0; i<n; i++)
		{
			int sum = s1[i].a + s1[i].b + s1[i].c;
			if ((sum / 3)<60)
				count++;//判断平均分不及格人数
		}
		printf("%d", count);
	}
	return 0;
}