#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{	//菜单栏
	printf("********************************\n");
	printf("****    1.play    0.exit    ****\n");
	printf("********************************\n");
}
void game()
{
	int random_num = rand() % 100 + 1;//随机数
	int input = 0;
	while (1)
	{
		printf("请输入数字:>");
		scanf("%d", &input);//输入猜的数字
		if (input > random_num)
		{
			printf("猜大了\n");
		}
		else if (input < random_num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;//退出该循环
		}
	}
}