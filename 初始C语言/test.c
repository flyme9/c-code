#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//����һ��stdio.h��ͷ�ļ�
//int �����͵���˼  mainǰ���int��ʾ�������÷���һ������
//int main()	//������-main�����ǳ������ڣ�һ���������ҽ���һ��
//{
//	//��һ��C���Գ���
//	//����Ļ�����Hello word
//	printf("Hello word\n");
//	//printf�Ǵ�ӡ����������һ���⺯��-C���Ա����ṩ������ʹ�õĺ���
//	//����ʹ��ʱ��Ҫ����ͷ�ļ�-#include
//
//
//	//�������ݸ����������͵Ĵ�С
//	//sizeof ��������������ͳ��ȣ����ĵ�λ���ֽڣ�
//	//һ���ֽ� = �˸�����λ
//	printf("%d\n", sizeof(char));			//�ַ���
//	printf("%d\n", sizeof(short));			//������
//	printf("%d\n", sizeof(int));			//����
//	printf("%d\n", sizeof(long));			//������
//	printf("%d\n", sizeof(long long));		//����������
//	printf("%d\n", sizeof(float));			//�����ȸ�����
//	printf("%d\n", sizeof(double));			//˫���ȸ�����
//	printf("%d\n", sizeof(long double));	//˫���ȸ�����
//	
//	//���͵�ʹ��
//	char ch = 'w';
//	int weight = 120;
//	float pi = 3.14;
//
//	
//	
//	return 0;//����0
//}

//�����볣��
//int global = 2019;//ȫ�ֱ���
//int main()
//{
//	int local = 2018;//�ֲ�����
//	int global = 20;//�ֲ�����
//	int sum = 0;//�ֲ�����
//	printf("ʹ��ǰ��%d %d\n", local, global);
//	scanf("%d%d", &local, &global);
//	sum = local + global;
//	printf("ʹ�ú�%d %d\n", local, global);
//	printf("��Ӻ�%d\n",sum);
//	return 0;
//}
//#define MAX 100 //#defind����ı�ʶ������
//enum Sex
//{
//	//����������ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	3.14;//���泣��
//	const float pai = 3.14f;//const���εĳ�����
//	pai = 6.28;//pai��const���εĳ����������¸�ֵ�ᱨ��
//
//	return 0;
//}

////�ַ����󳤶�
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//ת���ַ�
//int main()
//{
//	printf("δʹ��ת���ַ���c:\code\test.\321.c\n");
//	printf("ʹ��ת���ַ���c:\\code\\test.\\321.c\n");
//	return 0;
//}

//��֧���
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a == b)
//	{
//		printf("������һ����\n");
//	}
//	else if (a > b)
//	{
//		printf("a����b\n");
//	}
//	else
//	{
//		printf("aС��b");
//	}
//	return 0;
//}

//ѭ����� while
//int main()
//{
//	printf("ѧϰC����\n");
//	int line = 0;
//	while (line <= 20000)
//	{
//		line++;
//		printf("ÿ��Ŭ���ô��� %d\n",line);
//	}
//	if (line>20000)
//		printf("��úù���\n");
//	return 0;
//}

//����
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//ָ���ȡ�����洢��ʹ��
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}

//����ָ������Ĵ�С
//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}

//�ṹ��
struct Stu//struct�ǽṹ��Ĺؼ���
{//�����ǽṹ���Ա
	char name[20];//����
	int age; //����
	char sex[5]; //�Ա�
	char id[15]; //ѧ��
};
//�ṹ��ʹ��
int main()
{
	//��ӡ�ṹ����Ϣ
	struct Stu s = { "����",20,"��", "20180101" };
	//.Ϊ�ṹ��Ա�����󣩷��ʲ�����
	printf("name = %s age = %d sex = %s id = %s\n",
		s.name, s.age, s.sex, s.id);
	//->Ϊ�ṹ��Ա��ָ�룩���ʲ�����
	struct Stu *ps = &s;
	printf("name = %s age = %d sex = %s id = %s\n",
		ps->name, ps->age, ps->sex, ps->id);
	return 0;
}