#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	while (0)
	{
		int month = 0, year = 0;
		printf("请输入年份：");
		scanf("%d", &year);
		printf("请输入月份：");
		scanf("%d", &month);
		if (month >= 1 && month <= 12) {
			switch (month)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("该月天数为 31 天\n");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("该月天数为 30 天\n");
			case 2:
				if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
					printf("该年为闰年，2月天数为29天\n");
					break;
				}
				printf("该年为平年，2月天数为28天\n");
				break;
			default:
				printf("输入错误\n");
				break;
			}
		}
	}

	while (0)
	{
		char sroue;
		printf("请输入你的等级：");
		scanf("%c", &sroue);
		switch (sroue)
		{
		case 'a':
		case 'A':
			printf("你的分数为 90~100 之间\n");
			break;
		case 'b':
		case 'B':
			printf("你的分数为 80~90 之间\n");
			break;
		case 'c':
		case 'C':
			printf("你的分数为 70~80 之间\n");
			break;
		case 'd':
		case 'D':
			printf("你的分数为 60~70 之间\n");
			break;
		case 'e':
		case 'E':
			printf("你的分数为小于60\n");
			break;

		default:
			printf("输入的不正确\n");
			break;
		}
	}


	while (0) {
		double sale = 0; int tmpSale = 0;
		printf("请输入销售额：");
		scanf("%lf", &sale);
		//tmpSale = (int)sale / 1000;
		if (sale <= 2000) tmpSale = 1;
		else if (sale > 2000 && sale <= 5000) tmpSale = 2;
		else if (sale > 5000 && sale <= 10000) tmpSale = 3; // 
		else if (sale > 10000) tmpSale = 4;
		switch (tmpSale)
		{
		case 1:
			printf("员工本月销售额为:%.2lf\n", sale);
			printf("员工工资为%.2lf\n", sale*0.0 + 500);
			break;
		case 2:
			printf("员工本月销售额为:%.2lf\n", sale);
			printf("员工工资为%.2lf\n", sale*0.08 + 500);
			break;
		case 3:
			printf("员工本月销售额为:%.2lf\n", sale);
			printf("员工工资为%.2lf\n", sale*0.1 + 500);
			break;
		case 4:
			printf("员工本月销售额为:%.2lf\n", sale);
			printf("员工工资为%.2lf\n", sale*0.12 + 500);
			break;
		default:
			break;
		}
	}
}