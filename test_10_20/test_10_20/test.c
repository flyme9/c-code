#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//int sum = 0;
	//int arr[5][5] = {
	//	1,2,3,4,5,			// sum=0+1
	//	6,7,8,9,10,			// sum=1+7
	//	11,12,13,14,15,		// sum=8+13
	//	16,17,18,19,20,		// sum=21+19
	//	21,22,23,24,25 };	// sum=40+25
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 5; j++) {
	//		if (i == j) {
	//			sum += arr[i][j];
	//		}
	//	}
	//}
	//printf("%d \n", sum);


	//float sum1 = 0;
	//float avg = 0;
	//float arrAvg[3][4] = {
	//	1,2,3,4,
	//	6,7,8,9,
	//	11,12,13,14 };
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 4; j++) {
	//		sum1 += arr[i][j];
	//	}
	//}
	//avg = sum1 / 12;
	//printf("%.2f ", avg);
	//sum1 = 0;
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 4; j++) {
	//		if (arrAvg[i][j] > avg) {
	//			sum1 += arrAvg[i][j];
	//		}
	//	}
	//}
	//printf("%.2f \n", sum1);


	//int x = 0, h = 0, m = 0;
	//printf("请输入学号：");
	//scanf("%d", &x);
	//printf("请输入呼吸频率：");
	//scanf("%d", &h);
	//printf("请输入脉搏：");
	//scanf("%d", &m);
	//if ((h >= 15 && h <= 20) && (m >= 50 && m <= 70))
	//	printf("该 %d 学生在睡觉\n", x);
	//else
	//	printf("该 %d 学生在听课\n", x);

	int arr[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i] == arr[j])
				continue;

			printf("%d ", arr[i]);
		}
	}
	return 0;
}