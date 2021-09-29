#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int year = 0;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d 是闰年",year);
	}
	else{
		printf("%d 不是闰年",year);
	}



	//int numA = 0, numB = 0, numC = 0;
	//while(~scanf("%d%d%d", &numA, &numB, &numC)){
	//	if (numA + numB > numC && numA + numC > numB && numB + numC > numA) {
	//		printf("能够组成三角形\n");
	//	}
	//	else {
	//		printf("无法构成三角形\n");
	//	}
	//}


	/*char ch;
	while (~scanf("%c", &ch)) {
		if (ch >= 65 && ch <= 90) {
			printf("该字符为大写字母\n");
		}
		else if (ch >= 97 && ch <= 122) {
			printf("该字符不是大写字母，转换后字符为：%c\n", ch - 32);
		}
		else {
			printf("输入字符既不是大写也不是小写\n");
		}
		getchar();
	}*/
	return 0;
}