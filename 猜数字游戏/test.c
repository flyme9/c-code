#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()
{
	int input = 0;
	srand((unsigned) time(NULL));//�������������
	do
	{
		menu();//����menu����
		printf("����������:>\n");
		scanf("%d", &input);//����0��1���Բ˵�����ѡ��
		switch (input)
		{
		case 1:
			game();//����1������game����
			break;
		case 0:
			break;//����0���˳�����
		default:
			printf("ѡ���������������!\a\n");
			break;//�����������֣�����
		}
	} 
	while (input);
	return 0;
}