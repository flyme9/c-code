#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	while (0)
	{
		int month = 0, year = 0;
		printf("��������ݣ�");
		scanf("%d", &year);
		printf("�������·ݣ�");
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
				printf("��������Ϊ 31 ��\n");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("��������Ϊ 30 ��\n");
			case 2:
				if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
					printf("����Ϊ���꣬2������Ϊ29��\n");
					break;
				}
				printf("����Ϊƽ�꣬2������Ϊ28��\n");
				break;
			default:
				printf("�������\n");
				break;
			}
		}
	}

	while (0)
	{
		char sroue;
		printf("��������ĵȼ���");
		scanf("%c", &sroue);
		switch (sroue)
		{
		case 'a':
		case 'A':
			printf("��ķ���Ϊ 90~100 ֮��\n");
			break;
		case 'b':
		case 'B':
			printf("��ķ���Ϊ 80~90 ֮��\n");
			break;
		case 'c':
		case 'C':
			printf("��ķ���Ϊ 70~80 ֮��\n");
			break;
		case 'd':
		case 'D':
			printf("��ķ���Ϊ 60~70 ֮��\n");
			break;
		case 'e':
		case 'E':
			printf("��ķ���ΪС��60\n");
			break;

		default:
			printf("����Ĳ���ȷ\n");
			break;
		}
	}


	while (0) {
		double sale = 0; int tmpSale = 0;
		printf("���������۶");
		scanf("%lf", &sale);
		//tmpSale = (int)sale / 1000;
		if (sale <= 2000) tmpSale = 1;
		else if (sale > 2000 && sale <= 5000) tmpSale = 2;
		else if (sale > 5000 && sale <= 10000) tmpSale = 3; // 
		else if (sale > 10000) tmpSale = 4;
		switch (tmpSale)
		{
		case 1:
			printf("Ա���������۶�Ϊ:%.2lf\n", sale);
			printf("Ա������Ϊ%.2lf\n", sale*0.0 + 500);
			break;
		case 2:
			printf("Ա���������۶�Ϊ:%.2lf\n", sale);
			printf("Ա������Ϊ%.2lf\n", sale*0.08 + 500);
			break;
		case 3:
			printf("Ա���������۶�Ϊ:%.2lf\n", sale);
			printf("Ա������Ϊ%.2lf\n", sale*0.1 + 500);
			break;
		case 4:
			printf("Ա���������۶�Ϊ:%.2lf\n", sale);
			printf("Ա������Ϊ%.2lf\n", sale*0.12 + 500);
			break;
		default:
			break;
		}
	}
}