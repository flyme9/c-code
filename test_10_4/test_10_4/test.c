#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int total = 1020, count = 0;
	while ( total ){
		total = total - (total / 2 + 2);
		++count;
	}
	printf("买完这些瓜需要 %d 天\n", count);

	double numA = 0, numB = 0, reg = 0;
	char op;
	printf("请输入如 1 + 1 格式后按下回车：\n");
	while (~scanf("%lf %c %lf", &numA, &op, &numB))
	{
		while (getchar() != '\n') {
			op = '0';
		}
		switch (op)
		{
		case '+':
			printf("%.2lf + %.2lf = %lf\n", numA, numB, numA + numB);
			break;
		case '-':
			printf("%.2lf - %.2lf = %lf\n", numA, numB, numA - numB);
			break;
		case '*':
		case 'x':
		case 'X':
			printf("%.2lf * %.2lf = %lf\n", numA, numB, numA * numB);
			break;
		case '/':
			if (numB == 0) printf("除数不能为 0\n");
			else printf("%.2lf / %.2lf = %lf\n", numA, numB, numA / numB);
			break;
		default:
			printf("需要计算的等式输入不规范或不支持该运算\n");
			break;
		}
	}
	return 0;
}
