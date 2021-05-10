#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	
#include<string.h>
#include<errno.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	printf("%d", pf);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//int main()
//{	
//	char buff[1024] = { 0 };
//	struct Stu tmp = { 0 };
//	struct Stu s = { "张山",20,"男" };
//	//以只写模式打开test.txt文件
//	FILE* pfWrite = fopen("test.txt", "w");
//	//判断文件是否打开成功
//	if (pfWrite == NULL)
//	{	//打开失败，输出错误信息
//		printf(strerror(errno));
//		return 0;
//	}
//	else
//	{
//		//以一个字符写入信息
//		fputc('h', pfWrite);
//		fputc('e', pfWrite);
//		fputc('l', pfWrite);
//		fputc('l', pfWrite);
//		fputc('o', pfWrite);
//		fputc('\n', pfWrite);
//		//以一行写入信息
//		fputs("hello C\n", pfWrite);
//		fputs("hello world\n", pfWrite);
//		//以格式化写入信息
//		fprintf(pfWrite, "%s %d %s", s.name, s.age, s.sex);
//	}
//	//关闭文件，并将文件指针置为NULL
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf(strerror(errno));
//		return 0;
//	}
//	else
//	{
//		//以一个字符读取文件内容
//		printf("%c", fgetc(pfRead));
//		printf("%c", fgetc(pfRead));
//		printf("%c", fgetc(pfRead));
//		printf("%c", fgetc(pfRead));
//		printf("%c", fgetc(pfRead));
//		printf("%c", fgetc(pfRead));
//		//以一行读取文件内容
//		printf(fgets(buff, 100, pfRead));
//		printf(fgets(buff, 100, pfRead));
//		//以格式化读取文件内容
//		fscanf(pfRead, "%s %d %s\n", s.name, &(s.age), s.sex);
//		printf("%s %d %s\n", s.name, s.age, s.sex);
//	}
//	fclose(pfRead);
//	pfRead = NULL;
//	
//	return 0;
//}
//int main()
//{
//	struct Stu tmp = { 0 };
//	struct Stu s = { "张山",20,"男" };
//	FILE* PfWrite = fopen("test_1.txt", "wb");
//	if (PfWrite == NULL)
//	{
//		printf(strerror(errno));
//		return 0;
//	}
//	else
//	{
//		//以二进制写入信息
//		fwrite(&s, sizeof(struct Stu), 1, PfWrite);
//	}
//	fclose(PfWrite);
//	PfWrite = NULL;
//	FILE* PfRead = fopen("test_1.txt", "rb");
//	if (PfRead != NULL)
//	{
//		//以二进制读取文件内容
//		fread(&tmp, sizeof(struct Stu), 1, PfRead);
//		printf("%s %d %s\n", tmp.name, tmp.age, tmp.sex);
//	}
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf(strerror(errno));
//		return 0;
//	}
//	else
//	{
//		//1.定位指针位置
//		//SEEK_CUR：文件指针当前位置 
//		//SEEK_END：文件指针的末尾位置
//		//SEEK_SET：文件指针的起始位置
//		fseek(pf, -3, SEEK_END);
//		//2.读取文件
//		int ch = fgetc(pf);
//		printf("%c\n", ch);
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf(strerror(errno));
//		return 0;
//	}
//	else
//	{
//		fseek(pf, -2, SEEK_END);
//		printf("%d\n", ftell(pf));
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf(strerror(errno));
//		return 0;
//	}
//	else
//	{
//		printf("%c\n", fgetc(pf));
//		printf("%c\n", fgetc(pf));
//		rewind(pf);
//		printf("%c\n", fgetc(pf));
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int i;
//	FILE* PfRead = fopen("test.txt", "r");
//	if (PfRead == NULL)
//	{
//		perror("File opening failed");
//		return 0;
//	}
//	while ((i = fgetc(PfRead)) != EOF)
//	{
//		putchar(i);
//	}
//	if (ferror(PfRead))
//		printf("error\n");
//	else if (feof(PfRead))
//		printf("end of file\n");
//	fclose(PfRead);
//	PfRead = NULL;
//	return 0;
//}

enum { SIZE = 5 };
int main(void)
{
	double a[SIZE] = { 1.0,2.0,3.0,4.0,5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE *fp = fopen("test.bin", "wb"); // 必须用二进制模式
	fwrite(a, sizeof(*a), SIZE, fp); // 写 double 的数组
	fclose(fp);
	fp = fopen("test.bin", "rb");
	// 读 double 的数组
	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1)
	{
		printf("%lf\n", b);
	}
	if (feof(fp))
		printf("Error reading test.bin: unexpected end of file\n");
	else if (ferror(fp)) {
		perror("Error reading test.bin");
	}
	fclose(fp);
	fp = NULL;
}