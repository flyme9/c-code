#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float avg(float* arr,int arrLen) {
	if (!arrLen) {
		printf("数组为空\n");
		return 0;
	}
	float sum = 0;
	for (int i = 0; i < arrLen; i++) {
		sum += arr[i];
	}
	return sum / arrLen;
}
long long factorial(n) {
	long long sum = 1;
	if (n <= 1){
		return sum;
	}
	sum = n * factorial(n - 1);
}

int main() {
	int n = 0;
	float arr[] = { 90.5,90.5,90.3,85.5,75.3,90.5,90.5,90.3,85.5,75.3 };
	printf("%.2f\n",avg(arr, sizeof(arr) / sizeof(float)));

	printf("请输入n：");
	scanf("%d", &n);
	printf("%lld", factorial(n));
}