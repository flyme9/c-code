#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	while ((scanf("%d", &i)) != EOF)
	{
		if (i >= 100 && i <= 600)
		{
			switch (i)
			{
			case 200:
				printf("OK\n");
				break;
			case 202:
				printf("Accepted\n");
				break;
			case 400:
				printf("Bad Request\n");
				break;
			case 403:
				printf("Forbidden\n");
				break;
			case 404:
				printf("Not Found\n");
				break;
			case 500:
				printf("Internal Server Error\n");
				break;
			case 502:
				printf("Bad Gateway\n");
				break;
			default:
				break;
			}
		}
	}
	return 0;
}