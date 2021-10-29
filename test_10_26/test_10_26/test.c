#define _CRT_SECURE_NO_WARNINGS 1

long sumCubic(long n) {
	long sum = 0;
	for (long i = 0; i <= n; i++) {
		sum += i*i*i;
	}
	return sum;
}
#include<stdio.h>
int main()
{
#if 0
	char ch;
	int n1 = 0, n2 = 0;
	printf("请输入一个字符串以#结束:\n");
	while ((ch = getchar()) != '#')
	{
		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
			n1++;
		else if (ch == ' ')
			n2++;
	}
	printf("英文字母出现的次数是%d\n空格出现的次数是%d\n", n1, n2);
#endif // 0
#if 0
	char s1[80], s2[40];
	int i = 0, j = 0;
	printf("\n请输入第一个字符串:");
	scanf("%s", s1);
	printf("请输入第二个字符串:");
	scanf("%s", s2);
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		s1[i++] = s2[j++];
	s1[i] = '\0';
	printf("拼接后的字符串为:%s\n", s1);
#endif // 0

	long n = 0;
	printf("请输入n的大小：");
	scanf("%ld", &n);
	printf("%ld\n", sumCubic(n));
	return 0;
}


/*作业：
1.输入一个字符串，统计其中英文字母与空格的个数。
2.编写一个程序，功能为将两个字符串连接。（不能使用strcat函数）。
3.编写一个函数，计算1 - n的立方和。/*/