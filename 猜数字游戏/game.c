#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{	//�˵���
	printf("********************************\n");
	printf("****    1.play    0.exit    ****\n");
	printf("********************************\n");
}
void game()
{
	int random_num = rand() % 100 + 1;//�����
	int input = 0;
	while (1)
	{
		printf("����������:>");
		scanf("%d", &input);//����µ�����
		if (input > random_num)
		{
			printf("�´���\n");
		}
		else if (input < random_num)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;//�˳���ѭ��
		}
	}
}