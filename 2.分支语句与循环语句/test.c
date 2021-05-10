#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	
#include<string.h>
#include<Windows.h>
//int main()
//{
//	int age=0;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else if (age >= 18 && age < 66)
//		printf("青年\n");
//	else if (age >= 66 && age < 80)
//		printf("中年\n");
//	else if (age >= 80 && age < 100)
//		printf("老年\n");
//	else
//		printf("长寿老人\n");
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 66)
//			printf("青年\n");
//		else if (age >= 66 && age < 80)
//			printf("中年\n");
//		else if (age >= 80 && age < 100)
//			printf("老年\n");
//		else
//			printf("长寿老人\n");
//	}
//	return 0;
//}

//悬空else的问题写法
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
//悬空else的问题的改正
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//练习 -> 判断1-100之间的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i += 2;
//	}
//	return 0;
//}

//switch语句
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:
//		printf("星期一\n");
//		break;//用于跳出switch
//	case 2:
//		printf("星期二\n");
//		break;//用于跳出switch
//	case 3:
//		printf("星期三\n");
//		break;//用于跳出switch
//	case 4:
//		printf("星期四\n");
//		break;//用于跳出switch
//	case 5:
//		printf("星期五\n");
//		break;//用于跳出switch
//	case 6:
//		printf("星期六\n");
//		break;//用于跳出switch
//	case 7:
//		printf("星期日\n");
//		break;//用于跳出switch
//	default://当输入其他数值时，执行该语句
//		printf("输入错误\n");
//		break;
//	}
//	switch (input)
//	{
//	case 1:
//	case 2:	
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;//用于跳出switch
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;//用于跳出switch
//	default://当输入其他数值时，执行该语句
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//循环语句
//int main()
//{	//打印1-10的数字
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//while中的break
//int main()
//{	//打印1-10的数字
//	int i = 1;
//	while (i <= 10)
//	{	//break
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	//程序输出1 2 3 4
//	return 0;
//}
//while中的continue
//int main()
//{	//打印1-10的数字
//	int i = 1;
//	while (i <= 10)
//	{	//break
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	程序死循环
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//getchar()用于接收输入的字符 
//								//EOF --> 表示ctrl+z 它的值时-1
//		putchar(ch);//打印字符或字符串
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')//如果输入的字符不在0-9之间，跳回while循环判断
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1/*初始化*/; i <= 10/*判断*/; i++/*调整*/)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	//输出1 2 3 4
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	//输出1 2 3 4 6 7 8 9 10
//	return 0;
//}
//int main()
//{
//	//变种1
//	for (;;)//恒循环-->死循环
//	{
//		printf("haha\n");
//	}
//	//变种2
//	int x, y;
//	for (x = 0, y = 0; x<2 && y<5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("%d", i);
//	}
//		
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i<10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i<10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<10);
//	return 0;
//}

int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("电脑将在一分钟后关机，请输入密码;>");
	scanf("%s", input);
	if (0 == strcmp(input, "852654"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}