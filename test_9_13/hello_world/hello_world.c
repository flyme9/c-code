#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// �ж��������е����ֵ
void Max(int numA, int numB, int numC) {
	int tmp = (numA > numB ? numA : numB) > numC ? (numA > numB ? numA : numB) : numC;
	printf("���ֵΪ��%d\n", tmp);
}
// ����1-key�ĺ�
void KeySum(long long key) {
	long long sum = 0;
	for (long long i = 1; i <= key; i++) {
		sum += i;
	}
	printf("������Ϊ��%lld\n", sum);
}
int main() {
	printf("�༶��19������Ӧ�ü���1��\tѧ�ţ�T2019217104\t������������\n");
	printf("****************************\n");
	printf("*** 1.���� 1 - key �ĺ�  ***\n*** 2.�ж������������ֵ ***\n");
	printf("****************************\n");
	printf("����������0-2������0�˳���\n");
	int caseNum = 0;
	while (~scanf("%d", &caseNum)) {
		switch (caseNum)
		{
		case 1:
			printf("����1 - key��Χ��ֵ\n��������Ҫ�����key��\n");
			long long key = 0;
			scanf("%lld", &key);
			KeySum(key);
			printf("����������0-2������0�˳���\n");
			break;
		case 2:
			printf("�ж����ֵ\n");
			printf("��������Ҫ�жϵ���������\n");
			int numA = 0, numB = 0, numC = 0;
			scanf("%d%d%d", &numA, &numB, &numC);
			Max(numA, numB, numC);
			printf("����������0-2������0�˳���\n");
			break;
		case 0:
			printf("�˳�����\n");
			return;
		default:
			printf("���벻�Ϸ�\n");
			printf("����������0-2������0�˳���\n");
			break;
		}
	}
}
