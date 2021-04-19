#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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