#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
char board[ROW][COL];
int main()
{
	int result;
	srand((unsigned int)time(NULL));
	int input;
	do 
	{
		printf("**********************************\n");
		printf("*****    1.��Ϸ     2.�˳�   *****\n");
		printf("**********************************\n");
		printf("�����룺");
		scanf_s("%d", &input);
		if (input == 1) 
		{
			printf("������(���װ�)\n");
			printf("ֻ���ж�����������б���ж������ҵ������õ���������������е��˹����ϡ�\n����Գ����õ���Ӯ��������ӿ����ԡ�\n��Ҫ�˽�Ľ��棬������V��50������һʱ���յ��ġ���doge��\n");
			printf("΢�źţ�M2519533391\n");
			printf("��ҷ��ţ�*\n���Է��ţ�#\n");
			remakeboard(board, ROW, COL);
			doboard(board, ROW, COL);
			while (1) 
			{
				playermove(board, ROW, COL);
				doboard(board, ROW, COL);
				result = iswin(board, ROW, COL);
				if (result == 1) 
				{
					printf("------------------------------\n");
					printf("-----------��ϲ��ʤ��---------\n");
					printf("------------------------------\n");
					break;
				}
				if (result == 2) 
				{
					printf("-------------ƽ��-------------\n");
					break;
				}
				computermove(board, ROW, COL);
				doboard(board, ROW, COL);
				result = iswin(board, ROW, COL);
				if (result == 3)
				{
					printf("----------�ٽ�������----------\n");
					break;
				}
				if (result == 2)
				{
					printf("-------------ƽ��-------------\n");
					break;
				}
			}

		}
		else if (input == 2)
			printf("-------------�����㲻�棿 6 -------------\n");

		else 
		{
			printf("�����������������\n");
		}
	} while (input != 2);
	system("pause");
}