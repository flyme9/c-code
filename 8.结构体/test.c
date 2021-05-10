#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
//typedef struct Stu
//{
//	char name[20];//姓名
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//}Stu;//typedef对结构体重命名为Stu
//int main()
//{
//	Stu S1 = { "张三",20,"男","123456789" };
//	printf("%s\n%d\n%s\n%s\n", S1.name, S1.age, S1.sex, S1.id);
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//}p1;//声明结构体同时定义变量p1
//struct Point p2;//定义结构体变量p2
//struct Point p3 = { 5, 6 };//初始化：定义变量的同时赋初值
//struct Stu
//{
//	char name[20];
//	int age;
//	struct Point p;
//};
//struct Stu S1 = { "zhangshan",20,{50,60} };//结构体嵌套初始化

//struct Stu
//{
//	char name[20];
//	int age;
//};
//void print_1(struct Stu s)
//{	//结构体传参
//	printf("name:%s	age:%d\n", s.name, s.age);
//}
//void print_2(struct Stu *ps)
//{	//结构体地址传参
//	printf("name:%s	age:%d\n", ps->name,ps->age);
//}
//int main()
//{
//	struct Stu S1 = { "zhangshan",20 };
//	print_1(S1);//传结构体
//	print_2(&S1);//传地址
//	return 0;
//}

//描述一个学生
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
////成员自引用，Node* next未知
////解决方案：
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//struct Stu
//{
//	char name[20];
//	int age;
//}s1;							//声明结构体类型，同时定义变量s1
//struct T
//{
//	struct Stu s2;
//	float weight;
//}s3 = { {"zhangshan",20},55.0 };//结构体嵌套初始化
//struct Stu s1 = { "lisi",20 };				//初始化
//int main()
//{
//	printf("%s %d %f\n", s3.s2.name, s3.s2.age, s3.weight);
//	printf("%s %d\n", s1.name, s1.age);
//	return 0;
//}

//计算结构体大小
//struct S1
//{
//	char c1;//0
//			//1-3，不是 i 对齐数的整数倍浪费
//	int i;	//4-7
//	char c2;//8
////上面共占9个字节，不是最大对齐数的整数倍，所以浪费9-11，共占12字节
//};
//struct S2
//{
//	char c1;	 //0
//				 //1-3浪费
//	struct S1 s3;//
//				 //12-15浪费
//	double d;	 //16-23
//				 //共占24字节
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//#pragma pack(4)
////设置默认对齐数
//struct Stu
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
////取消默认对齐数
//#pragma pack(1)
////设置默认对齐数
//struct Stu2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
////取消默认对齐数
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
//	stu s = { "zhangshan",20,"男" ,"123456"};
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

//enum Day//星期
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//颜色
//{
//	RED = 2,	//可以赋初始值
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

//判断大小端
//union Check
//{
//	char x;
//	int y;
//};
//int main()
//{
//	union Check un = { 1 };
//	if (un.x == 1)
//		printf("小端\n");
//	else			
//		printf("大端\n");
//	return 0;
//}