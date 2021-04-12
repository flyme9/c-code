#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age<=18)
	{
		printf("你属于少年\n");
	}
	else
	{
		if (age > 18 && age <= 35)
		{
			printf("你属于青年\n");
		}
		else if (age>35&&age<=59)
		{
			printf("你属于中年\n");
		}
		else if (age > 59)
		{
			if (age>59&&age<=70)
			{
				printf("你属于老年\n");
			}
			else
			{
				printf("你属于高龄\n");
			}
			
		}
	}
	return 0;
}

int main()
{
	int day = 0;
	scanf("%d", &day);		
	switch (day)
	{
		case 1:
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
		case 7:
			printf("星期日\n");
			break;
		default://在每个 switch 语句中都放一条default子句是个好习惯，甚至可以在后边再加一个 break 。
			printf("输入错误\n");
			break;
	}
}

int main()
{
	int day = 0;
	scanf("%d", &day);		
	switch (day)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("今天是工作日\n");
			break;
		case 6:
		case 7:
			printf("今天是休息日\n");
			break;
		default://在每个 switch 语句中都放一条default子句是个好习惯，甚至可以在后边再加一个 break 。
			printf("输入错误\n");
			break;
	}
}