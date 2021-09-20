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
		printf("ʵ���� x1 = %.2f��ʵ���� x2 = %.2f\n", x1, x2);
	}
	else
	{
		printf("û��ʵ����\n");
	}
}
void BullsCows() {
	char c = 0, a;
	srand((unsigned)time(NULL)); // ���������
	do {
		printf("Ѻ���밴D,ѺС�밴X,�˳���Ϸ�밴T��");
		scanf("%c", &c);
		if (c == 't' || c == 'T') return;
		if (c == 'x' || c == 'X') c = 0;
		else if (c == 'd' || c == 'D') c = 1;
		else {
			printf("��������,������!\n");
			continue;
		}
		getchar();//���ջس� 
		a = rand() % 6 + 1;// ����1-6�����
		printf("��%d,%s! ", a, a>3 ? "��" : "С");
		if ((a > 3 && c == 1) || (a <=3 && c == 0))
			printf("��ϲ��,�¶���!\n");
		else printf("���ź�,�´���!\n");
	} while (1);
	
}
int main() {
	printf("*******************\n");
	printf("** 1. ����ʵ���� **\n");
	printf("** 2. �����ִ�С **\n");
	printf("*******************\n");
	int option = 0;
	float numA = 0, numB = 0, numC = 0;
	printf("������ѡ�����0�˳�����");
	while (~scanf("%d", &option)) {
		switch (option)
		{
		case 1:
			printf("������һԪ���η��̵� a b c��");
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
			printf("����Ƿ�,��������\n");
			break;
		}
		printf("������ѡ�����0�˳�����");

	}
}