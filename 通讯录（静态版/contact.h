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
//ͨѶ¼��Ա��Ϣ
struct PeoInfo
{
	char name[MAX_NAME];//����
	char sex[MAX_SEX];//�Ա�
	int age;//����
	char tele[MAX_TELE];//�绰
	char addr[MAX_ADDR];//סַ
};
//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���һǧ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};

//��������
//��ʼ��ͨѶ¼����
void InitContact(struct Contact *ps);
//���ͨѶ¼��Ա��Ϣ����
void AddContact(struct Contact *ps);
//�鿴ͨѶ¼��Ա��Ϣ����
void ShowContact(const struct Contact *ps);
//ɾ��ָ��ͨѶ¼��Ա��Ϣ����
void DelContact(struct Contact *ps);
//����ָ��ͨѶ¼��Ա����Ϣ
void SealedContact(const struct Contact *ps);
//�޸�ָ����Ա��Ϣ
void ModifyContact(struct Contact *ps);
//ͨѶ¼��Ա����
void SortContact(struct Contact *ps);