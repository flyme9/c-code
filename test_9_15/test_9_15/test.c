#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
void QuadraticEquationSolution(float a,float b,float c) {
	float x1 = 0, x2 = 0;
	if ((b*b - 4 * a*c) >= 0)
	{
		x1 = (-b + sqrt(b*b - 4 * a*c)) / 2 * a;
		x2 = (-b - sqrt(b*b - 4 * a*c)) / 2 * a;
		printf("实数根 x1 = %.2f，实数根 x2 = %.2f\n", x1, x2);
	}
	else
	{
		printf("没有实数根\n");
	}
}
void BullsCows() {
	char c = 0, a;
	srand((unsigned)time(NULL)); // 随机数种子
	do {
		printf("押大请按D,押小请按X,退出游戏请按T：");
		scanf("%c", &c);
		if (c == 't' || c == 'T') return;
		if (c == 'x' || c == 'X') c = 0;
		else if (c == 'd' || c == 'D') c = 1;
		else {
			printf("输入有误,请重来!\n");
			continue;
		}
		getchar();//吸收回车 
		a = rand() % 6 + 1;// 生成1-6随机数
		printf("开%d,%s! ", a, a>3 ? "大" : "小");
		if ((a > 3 && c == 1) || (a <=3 && c == 0))
			printf("恭喜你,猜对了!\n");
		else printf("很遗憾,猜错了!\n");
	} while (1);
	
}
int main() {
	printf("*******************\n");
	printf("** 1. 计算实数根 **\n");
	printf("** 2. 猜数字大小 **\n");
	printf("*******************\n");
	int option = 0;
	float numA = 0, numB = 0, numC = 0;
	printf("请输入选项，输入0退出程序：");
	while (~scanf("%d", &option)) {
		switch (option)
		{
		case 1:
			printf("请输入一元二次方程的 a b c：");
			scanf("%f %f %f", &numA, &numB, &numC);
			QuadraticEquationSolution(numA, numB, numC);
			break;
		case 2:
			getchar();
			BullsCows();
			break;
		case 0:
			exit(-1);
			break;
		default:
			printf("输入非法,重新输入\n");
			break;
		}
		printf("请输入选项，输入0退出程序：");

	}
}