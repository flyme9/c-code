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
		printf("���ս��Ϊ %d\n", sum);
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
	printf("* 1.��ʼ *\t* 2.���� *\n");
	printf("* 3.���� *\t* 4.�˳� *\n");
	printf("**************************\n");
	printf("������ѡ�");
	while (~scanf("%d", &select)) {
		while (getchar() != '\n');
		switch (select)
		{
		case 1:
			printf("��ʼ\n");
			break;
		case 2:
			printf("����\n");
			break;
		case 3:
			printf("����\n");
			break;
		case 4:
			printf("�˳�\n");
			return 0;
		default:
			printf("\n����ѡ����ڣ������� 0~4 ��Χ���֣�");
			break;
		}
		select = -1;
	}
	return 0;
}