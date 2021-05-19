#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int weight, height;
	while (~scanf("%d %d", &weight, &height))
	{
		double bmi = (double)weight / ((double) height*(double)height / 100 / 100);
		if (bmi<18.5)
			printf("Underweight\n");
		else if (bmi >= 18.5&&bmi <= 23.9)
			printf("Normal\n");
		else if (bmi>23.9&&bmi <= 27.9)
			printf("Overweight\n");
		else
			printf("Obese\n");
	}
	return 0;
}