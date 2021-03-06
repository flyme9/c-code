#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30	
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
//通讯录人员信息
struct PeoInfo
{
	char name[MAX_NAME];//姓名
	char sex[MAX_SEX];//性别
	int age;//年龄
	char tele[MAX_TELE];//电话
	char addr[MAX_ADDR];//住址
};
//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//存放一千个信息
	int size;//记录当前已经有的元素个数
};

//函数声明
//初始化通讯录函数
void InitContact(struct Contact *ps);
//添加通讯录人员信息函数
void AddContact(struct Contact *ps);
//查看通讯录人员信息函数
void ShowContact(const struct Contact *ps);
//删除指定通讯录人员信息函数
void DelContact(struct Contact *ps);
//查找指定通讯录人员的信息
void SealedContact(const struct Contact *ps);
//修改指定人员信息
void ModifyContact(struct Contact *ps);
//通讯录人员排序
void SortContact(struct Contact *ps);