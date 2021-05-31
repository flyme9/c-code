#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* replaceSpace(char* s) {
	int len = strlen(s);
	int cur = 0, next = 0;
	char *str = (char*)malloc(sizeof(char)*(len * 3 + 1));
	memset(str, 0, sizeof(char)*(len * 3 + 1));
	while (s[cur] != '\0')
	{
		if (s[cur] != ' ')
		{
			str[next] = s[cur];
			cur++;
			next++;
		}
		else
		{
			str[next++] = '%';
			str[next++] = '2';
			str[next++] = '0';
			cur++;
		}
	}
	return str;
}
int main()
{
	char str[] = "We are happy.";
	char *ps = replaceSpace(str);
	printf("%s", ps);
	return 0;
}