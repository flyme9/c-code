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
	printf("������һ���ַ�����#����:\n");
	while ((ch = getchar()) != '#')
	{
		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
			n1++;
		else if (ch == ' ')
			n2++;
	}
	printf("Ӣ����ĸ���ֵĴ�����%d\n�ո���ֵĴ�����%d\n", n1, n2);
#endif // 0
#if 0
	char s1[80], s2[40];
	int i = 0, j = 0;
	printf("\n�������һ���ַ���:");
	scanf("%s", s1);
	printf("������ڶ����ַ���:");
	scanf("%s", s2);
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		s1[i++] = s2[j++];
	s1[i] = '\0';
	printf("ƴ�Ӻ���ַ���Ϊ:%s\n", s1);
#endif // 0

	long n = 0;
	printf("������n�Ĵ�С��");
	scanf("%ld", &n);
	printf("%ld\n", sumCubic(n));
	return 0;
}


/*��ҵ��
1.����һ���ַ�����ͳ������Ӣ����ĸ��ո�ĸ�����
2.��дһ�����򣬹���Ϊ�������ַ������ӡ�������ʹ��strcat��������
3.��дһ������������1 - n�������͡�/*/