#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int year = 0;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d ������",year);
	}
	else{
		printf("%d ��������",year);
	}



	//int numA = 0, numB = 0, numC = 0;
	//while(~scanf("%d%d%d", &numA, &numB, &numC)){
	//	if (numA + numB > numC && numA + numC > numB && numB + numC > numA) {
	//		printf("�ܹ����������\n");
	//	}
	//	else {
	//		printf("�޷�����������\n");
	//	}
	//}


	/*char ch;
	while (~scanf("%c", &ch)) {
		if (ch >= 65 && ch <= 90) {
			printf("���ַ�Ϊ��д��ĸ\n");
		}
		else if (ch >= 97 && ch <= 122) {
			printf("���ַ����Ǵ�д��ĸ��ת�����ַ�Ϊ��%c\n", ch - 32);
		}
		else {
			printf("�����ַ��Ȳ��Ǵ�дҲ����Сд\n");
		}
		getchar();
	}*/
	return 0;
}