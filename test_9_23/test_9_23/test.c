#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main() {
	//int numA, numB, numC;
	//scanf("%d %d %d", &numA, &numB, &numC);
	//if (numA > numB) {
	//	numA ^= numB;
	//	numB ^= numA;
	//	numA ^= numB;
	//}
	//if (numA > numC) {
	//	numA ^= numC;
	//	numC ^= numA;
	//	numA ^= numC;
	//}
	//if (numB > numC) {
	//	numB ^= numC;
	//	numC ^= numB;
	//	numB ^= numC;
	//}
	//printf("%d %d %d\n", numA, numB,numC);


	//int numA, numB;
	//while (~scanf("%d %d", &numA, &numB))
	//{
	//	if (numA > numB) printf("����Ϊ %d\n", numA);
	//	else printf("����Ϊ %d\n", numB);
	//}

	//char key;
	//scanf("%c", &key);
	//if ((key >= 65 && key <= 90) || (key >= 97 && key <= 122)) printf("%c\n", key);
	//else if (key >= 49 && key <= 59) printf("%d\n", (char)key);
	//else printf("���ַ��Ȳ�����ĸҲ����������\n");
	int flag = true;
	printf("������һ����λ����");
	int num = 0;
	scanf("%d", &num);
	printf("��λ�ǣ�%d\n", num / 100);		// 123   /100-> 1
	printf("ʮλ�ǣ�%d\n", num % 100 / 10);	// 123   %100->23/10->2
	printf("��λ�ǣ�%d\n", num % 10);		// 123   %10->3
	printf("��������ĳɼ���");
	int score = 0;
	scanf("%d", &score);
	if (score >= 90 && score <= 100) printf("�ɼ��ȼ�ΪA\n");		// 90 <= socre <= 100
	else if (score >= 80 && score < 90) printf("�ɼ��ȼ�ΪB\n");	// 80             90
	else if (score >= 70 && score < 80) printf("�ɼ��ȼ�ΪC\n");	// 70             80
	else if (score >= 60 && score < 70) printf("�ɼ��ȼ�ΪD\n");	// 60             70
	else if (score >= 0 && score < 60) printf("�ɼ��ȼ�ΪE\n");	// 60 
	else printf("�޷������������\n");
	return 0;
}