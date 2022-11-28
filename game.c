#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void remakeboard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			(board[i][j]) = ' ';
		}
	}
}
void doboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}printf("\n");
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void playermove(char board[ROW][COL], int row, int col) 
{
	int x;
	int y;
	printf("�����\n");
	while (1) 
	{
		printf("���������꣺��ʽ������+�ո�+���֣�");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col) 
		{
			if (board[x - 1][y - 1] == ' ') 
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else 
			{
				printf("�ѱ�ռ�ã�����������\n");
			}
		}
		else 
		{
			printf("������������������\n");
		}
	}
}
void computermove(char board[ROW][COL], int row, int col) 
{
	int x;
	int y;
	printf("������\n");
	while (1) 
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int iswin(char board[ROW][COL], int row, int col) 
{
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col-4; j++) 
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] && board[i][j] == board[i][j + 3] && board[i][j] == board[i][j + 4]  && board[i][j] == '*')
			{
				return 1;
			}
			if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] && board[i][j] == board[i][j + 3] && board[i][j] == board[i][j + 4]  && board[i][j] == '#') 
			{
				return 3;
			}
		}
	}
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < row - 4; i++)
		{
			if (board[i][j] == board[i+1][j] && board[i][j] == board[i+2][j] && board[i][j] == board[i+3][j] && board[i][j] == board[i+4][j] && board[i][j] == '*')
			{
				return 1;
			}
			if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] == board[i + 3][j] && board[i][j] == board[i + 4][j] &&  board[i][j]&& board[i][j] == '#')
			{
				return 3;
			}
		}
	}
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 2;
}