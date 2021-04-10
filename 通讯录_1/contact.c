#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
//��������
static int Find_By_Name(const struct Contact* ps,char name[MAX_NAME])
{
	//�ҵ�������������Ԫ������
	//û�ҵ����� -1
	int i;
	for (i = 0; ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//�Ҳ���
}
//��ʼ��ͨѶ¼����
void InitContact(struct Contact *ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//����ͨѶ¼���Ԫ��Ϊ0��
}
//����ͨѶ¼��Ա��Ϣ����
void AddContact(struct Contact *ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("������סլ:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
	Sleep(500);
	system("cls");
}
//�鿴ͨѶ¼����
void ShowContact(const struct Contact *ps)
{
	if (ps->size == 0)
	{
		//printf("%-8s\t%-5s\t%-5s\t%-15s\t%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
		printf("ͨѶ¼Ϊ��\n");
		Sleep(500);
		system("cls");
	}
	else
	{
		int i = 0;
		//��ӡ��ͷ
		printf("%-8s\t%-5s\t%-5s\t%-15s\t%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
		//��ӡ��Ϣ
		for (i = 0; i < ps->size; i++)
		{
			printf("%-8s\t%-5s\t%-5d\t%-15s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].age,
				ps->data[i].tele,
				ps->data[i].addr);
		}
		Sleep(10000);
		system("cls");
	}
}
//ɾ��ͨѶ¼��Ϣ����
void DelContact(struct Contact *ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//1.����ɾ�������λ��
	
	int pos = Find_By_Name(ps, name);
	//2.ɾ��
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j;
		for (j = pos; j < ps->size ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
	Sleep(500);
	system("cls");
}
//����ָ��ͨѶ¼��Ա����Ϣ
void SealedContact(const struct Contact *ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = Find_By_Name(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		Sleep(500);
		system("cls");
	}
	else
	{
		printf("%-8s\t%-5s\t%-5s\t%-15s\t%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
		printf("%-8s\t%-5s\t%-5d\t%-15s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].sex,
				ps->data[pos].age,
				ps->data[pos].tele,
				ps->data[pos].addr);
		Sleep(5000);
		system("cls");
	}
	
}
//�޸�ָ��ͨѶ¼��Ա��Ϣ
void ModifyContact(struct Contact *ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = Find_By_Name(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸��˵���Ϣ������\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("������סլ:>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");
	}
	Sleep(500);
	system("cls");
}
//ͨѶ¼��Ա����(ͨ����������)
void SortContact(struct Contact *ps)
{
	int i;
	for (i = 0; i < ps->size; i++)
	{	
		int j;
		for (j = 0; j < ps->size - i - 1; j++)
		{
			if (strcmp(ps->data[j].name, ps->data[j + 1].name)>0)
			{
				struct PeoInfo tmp;
				tmp = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = tmp;
			}
		}
	}
	printf("������ɣ�����5�鿴\n");
	Sleep(500);
	system("cls");
}