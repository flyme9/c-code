#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//typedef struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[20];//ѧ��
//}Stu;//typedef�Խṹ��������ΪStu
//int main()
//{
//	Stu S1 = { "����",20,"��","123456789" };
//	printf("%s\n%d\n%s\n%s\n", S1.name, S1.age, S1.sex, S1.id);
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//}p1;//�����ṹ��ͬʱ�������p1
//struct Point p2;//����ṹ�����p2
//struct Point p3 = { 5, 6 };//��ʼ�������������ͬʱ����ֵ
//struct Stu
//{
//	char name[20];
//	int age;
//	struct Point p;
//};
//struct Stu S1 = { "zhangshan",20,{50,60} };//�ṹ��Ƕ�׳�ʼ��

//struct Stu
//{
//	char name[20];
//	int age;
//};
//void print_1(struct Stu s)
//{	//�ṹ�崫��
//	printf("name:%s	age:%d\n", s.name, s.age);
//}
//void print_2(struct Stu *ps)
//{	//�ṹ���ַ����
//	printf("name:%s	age:%d\n", ps->name,ps->age);
//}
//int main()
//{
//	struct Stu S1 = { "zhangshan",20 };
//	print_1(S1);//���ṹ��
//	print_2(&S1);//����ַ
//	return 0;
//}