#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age<=18)
	{
		printf("����������\n");
	}
	else
	{
		if (age > 18 && age <= 35)
		{
			printf("����������\n");
		}
		else if (age>35&&age<=59)
		{
			printf("����������\n");
		}
		else if (age > 59)
		{
			if (age>59&&age<=70)
			{
				printf("����������\n");
			}
			else
			{
				printf("�����ڸ���\n");
			}
			
		}
	}
	return 0;
}

int main()
{
	int day = 0;
	scanf("%d", &day);		
	switch (day)
	{
		case 1:
			printf("����һ\n");
			break;
		case 2:
			printf("���ڶ�\n");
			break;
		case 3:
			printf("������\n");
			break;
		case 4:
			printf("������\n");
			break;
		case 5:
			printf("������\n");
			break;
		case 6:
			printf("������\n");
			break;
		case 7:
			printf("������\n");
			break;
		default://��ÿ�� switch ����ж���һ��default�Ӿ��Ǹ���ϰ�ߣ����������ں���ټ�һ�� break ��
			printf("�������\n");
			break;
	}
}

int main()
{
	int day = 0;
	scanf("%d", &day);		
	switch (day)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("�����ǹ�����\n");
			break;
		case 6:
		case 7:
			printf("��������Ϣ��\n");
			break;
		default://��ÿ�� switch ����ж���һ��default�Ӿ��Ǹ���ϰ�ߣ����������ں���ټ�һ�� break ��
			printf("�������\n");
			break;
	}
}