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
//	struct Stu s = { "��ɽ",20,"��" };
//	//��ֻдģʽ��test.txt�ļ�
//	FILE* pfWrite = fopen("test.txt", "w");
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (pfWrite == NULL)
//	{	//��ʧ�ܣ����������Ϣ
//		printf(strerror(errno));
//		return 0;
//	}
//	else
//	{
//		//��һ���ַ�д����Ϣ
//		fputc('h', pfWrite);
//		fputc('e', pfWrite);
//		fputc('l', pfWrite);
//		fputc('l', pfWrite);
//		fputc('o', pfWrite);
//		fputc('\n', pfWrite);
//		//��һ��д����Ϣ
//		fputs("hello C\n", pfWrite);
//		fputs("hello world\n", pfWrite);
//		//�Ը�ʽ��д����Ϣ
//		fprintf(pfWrite, "%s %d %s", s.name, s.age, s.sex);
//	}
//	//�ر��ļ��������ļ�ָ����ΪNULL
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
//		//��һ���ַ���ȡ�ļ�����
//		printf("%c", fgetc(pfRead));
//		printf("%c", fgetc(pfRead));
//		printf("%c", fgetc(pfRead));
//		printf("%c", fgetc(pfRead));
//		printf("%c", fgetc(pfRead));
//		printf("%c", fgetc(pfRead));
//		//��һ�ж�ȡ�ļ�����
//		printf(fgets(buff, 100, pfRead));
//		printf(fgets(buff, 100, pfRead));
//		//�Ը�ʽ����ȡ�ļ�����
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
//	struct Stu s = { "��ɽ",20,"��" };
//	FILE* PfWrite = fopen("test_1.txt", "wb");
//	if (PfWrite == NULL)
//	{
//		printf(strerror(errno));
//		return 0;
//	}
//	else
//	{
//		//�Զ�����д����Ϣ
//		fwrite(&s, sizeof(struct Stu), 1, PfWrite);
//	}
//	fclose(PfWrite);
//	PfWrite = NULL;
//	FILE* PfRead = fopen("test_1.txt", "rb");
//	if (PfRead != NULL)
//	{
//		//�Զ����ƶ�ȡ�ļ�����
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
//		//1.��λָ��λ��
//		//SEEK_CUR���ļ�ָ�뵱ǰλ�� 
//		//SEEK_END���ļ�ָ���ĩβλ��
//		//SEEK_SET���ļ�ָ�����ʼλ��
//		fseek(pf, -3, SEEK_END);
//		//2.��ȡ�ļ�
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
	FILE *fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
	fwrite(a, sizeof(*a), SIZE, fp); // д double ������
	fclose(fp);
	fp = fopen("test.bin", "rb");
	// �� double ������
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