#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
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

//����һ��ѧ��
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//};
//struct
//{
//	char name[20];
//	int age;
//}stu;
//struct
//{
//	char name[20];
//	int age;
//}s[20],*p;
//int main()
//{
//	p = &stu;
//	return 0;
//}

//struct Node
//{
//	int data;
//	struct Node next;//err
//};
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
////��Ա�����ã�Node* nextδ֪
////���������
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//struct Stu
//{
//	char name[20];
//	int age;
//}s1;							//�����ṹ�����ͣ�ͬʱ�������s1
//struct T
//{
//	struct Stu s2;
//	float weight;
//}s3 = { {"zhangshan",20},55.0 };//�ṹ��Ƕ�׳�ʼ��
//struct Stu s1 = { "lisi",20 };				//��ʼ��
//int main()
//{
//	printf("%s %d %f\n", s3.s2.name, s3.s2.age, s3.weight);
//	printf("%s %d\n", s1.name, s1.age);
//	return 0;
//}

//����ṹ���С
//struct S1
//{
//	char c1;//0
//			//1-3������ i ���������������˷�
//	int i;	//4-7
//	char c2;//8
////���湲ռ9���ֽڣ����������������������������˷�9-11����ռ12�ֽ�
//};
//struct S2
//{
//	char c1;	 //0
//				 //1-3�˷�
//	struct S1 s3;//
//				 //12-15�˷�
//	double d;	 //16-23
//				 //��ռ24�ֽ�
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//#pragma pack(4)
////����Ĭ�϶�����
//struct Stu
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
////ȡ��Ĭ�϶�����
//#pragma pack(1)
////����Ĭ�϶�����
//struct Stu2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
////ȡ��Ĭ�϶�����
//int main()
//{
//	printf("%d\n%d\n", sizeof(struct Stu), sizeof(struct Stu2));
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//}stu;
//void Print_1(struct Stu tmp)
//{
//	printf("%-10s %-5d %-5s %-10s\n", tmp.name, tmp.age, tmp.sex, tmp.id);
//}
//void Print_2(struct Stu* ps)
//{
//	printf("%-10s %-5d %-5s %-10s\n", ps->name, ps->age, ps->sex, ps->id);
//}
//int main()
//{
//	stu s = { "zhangshan",20,"��" ,"123456"};
//	Print_1(s);
//	Print_2(&s);
//	return 0;
//}

//struct S
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 20;
//};
//int main()
//{
//	struct S s = { 10,12,3,4 };
//	printf("%d\n", sizeof(struct S));
//	
//	return 0;
//}

//enum Day//����
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//�Ա�
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//��ɫ
//{
//	RED = 2,	//���Ը���ʼֵ
//	GREEN = 3,
//	BLUE
//};

//union Un
//{
//	char c[4];
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

//�жϴ�С��
//union Check
//{
//	char x;
//	int y;
//};
//int main()
//{
//	union Check un = { 1 };
//	if (un.x == 1)
//		printf("С��\n");
//	else			
//		printf("���\n");
//	return 0;
//}