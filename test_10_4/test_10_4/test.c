#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int total = 1020, count = 0;
	while ( total ){
		total = total - (total / 2 + 2);
		++count;
	}
	printf("������Щ����Ҫ %d ��\n", count);

	double numA = 0, numB = 0, reg = 0;
	char op;
	printf("�������� 1 + 1 ��ʽ���»س���\n");
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
			if (numB == 0) printf("��������Ϊ 0\n");
			else printf("%.2lf / %.2lf = %lf\n", numA, numB, numA / numB);
			break;
		default:
			printf("��Ҫ����ĵ�ʽ���벻�淶��֧�ָ�����\n");
			break;
		}
	}
	return 0;
}
