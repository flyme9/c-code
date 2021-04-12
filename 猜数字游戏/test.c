#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()
{
	int input = 0;
	srand((unsigned) time(NULL));//生成随机数种子
	do
	{
		menu();//调用menu函数
		printf("请输入数字:>\n");
		scanf("%d", &input);//输入0或1，对菜单进行选择
		switch (input)
		{
		case 1:
			game();//输入1，调用game函数
			break;
		case 0:
			break;//输入0，退出程序
		default:
			printf("选择错误，请重新输入!\a\n");
			break;//输入其他数字，报错
		}
	} 
	while (input);
	return 0;
}