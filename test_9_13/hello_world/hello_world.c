#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 判断三个数中的最大值
void Max(int numA, int numB, int numC) {
	int tmp = (numA > numB ? numA : numB) > numC ? (numA > numB ? numA : numB) : numC;
	printf("最大值为：%d\n", tmp);
}
// 计算1-key的和
void KeySum(long long key) {
	long long sum = 0;
	for (long long i = 1; i <= key; i++) {
		sum += i;
	}
	printf("计算结果为：%lld\n", sum);
}
int main() {
	printf("班级：19物联网应用技术1班\t学号：T2019217104\t姓名：高来云\n");
	printf("****************************\n");
	printf("*** 1.计算 1 - key 的和  ***\n*** 2.判断三个数中最大值 ***\n");
	printf("****************************\n");
	printf("请输入需求（0-2）输入0退出：\n");
	int caseNum = 0;
	while (~scanf("%d", &caseNum)) {
		switch (caseNum)
		{
		case 1:
			printf("计算1 - key范围的值\n请输入需要计算的key：\n");
			long long key = 0;
			scanf("%lld", &key);
			KeySum(key);
			printf("请输入需求（0-2）输入0退出：\n");
			break;
		case 2:
			printf("判断最大值\n");
			printf("请输入需要判断的三个数：\n");
			int numA = 0, numB = 0, numC = 0;
			scanf("%d%d%d", &numA, &numB, &numC);
			Max(numA, numB, numC);
			printf("请输入需求（0-2）输入0退出：\n");
			break;
		case 0:
			printf("退出程序\n");
			return;
		default:
			printf("输入不合法\n");
			printf("请输入需求（0-2）输入0退出：\n");
			break;
		}
	}
}
