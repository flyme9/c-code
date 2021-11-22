#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<string.h>
void week(int date) {
	switch (date)
	{
	case 1:
		printf("今天是星期一");
	case 2:
		printf("今天是星期一");
	case 3:
		printf("今天是星期一");
	case 4:
		printf("今天是星期一");
	case 5:
		printf("今天是星期一");
	case 6:
		printf("今天是星期一");
	case 7:
		printf("今天是星期一");
	default:
		printf("输入无效");
		break;
	}
}
struct data
{
	short year;
	short mounth;
	short day;
};
void computYearDay() {
	
}

int main() {
#if 0
	float arr[3] = { 0 };
	printf("请输入数据：");
	for (int i = 0; i < 3; i++)
	{
		scanf("%f", (arr + i));
		Sleep(1000);
		printf("%f\n", *(arr+i));
	}
	for (int i = 2; i >=0; i--)
	{	
		printf("%f\n", *(arr + i));               
	}


	char str[255]="";
	scanf("%s", &str);
	printf("%s", str);
#endif

	strlen('mma');
	return 0;
}