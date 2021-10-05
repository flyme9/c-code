#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	while (0)
	{
		int sum = 0, x = 0;
		while (x <= 100) {
			sum += x;
			x++;
		}
		printf("最终结果为 %d\n", sum);
	}

	while (0) {
		double n = 0;
		double reg = 1;
		scanf("%lf", &n); // 6
		while (n>0) // 6
		{
			reg = reg*n;
			n--;
		}
		printf("%.2lf \n", reg);
	}
	
	int select = -1;
	printf("**************************\n");
	printf("* 1.开始 *\t* 2.继续 *\n");
	printf("* 3.设置 *\t* 4.退出 *\n");
	printf("**************************\n");
	printf("请输入选项：");
	while (~scanf("%d", &select)) {
		while (getchar() != '\n');
		switch (select)
		{
		case 1:
			printf("开始\n");
			break;
		case 2:
			printf("继续\n");
			break;
		case 3:
			printf("设置\n");
			break;
		case 4:
			printf("退出\n");
			return 0;
		default:
			printf("\n输入选项不存在，请输入 0~4 范围数字：");
			break;
		}
		select = -1;
	}
	return 0;
}