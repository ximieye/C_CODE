#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------ɨ����Ϸ-----\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------ɨ����Ϸ-----\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	//1~9
	//1~9
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}

}



int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			sum = sum + board[x + i][y + j];
		}
	}

	return (sum - 9 * '0');
}

void SignMine(char board[ROWS][COLS], int x, int y)
{
	printf("������Ҫ��ǵ�����:>");
	scanf("%d %d", &x, &y);
	board[x][y] = '!';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//�ҵ����׵ĸ���

	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų��������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*' && show[x][y] != '!')
			{
				printf("�����걻�Ų���ˣ������ظ��Ų�\n");
			}
			else
			{
				//�������
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				//���������
				else
				{
					win++;
					//ͳ��mine������x,y������Χ�м�����
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';//ת���������ַ�
					DisplayBoard(show, ROW, COL);

					//�����
					int n = 0;
					printf("��ѡ���Ƿ���б�ǣ������ѡ��1���������ѡ��0\n");
					scanf("%d", &n);
					switch (n)
					{
					case 0:
						break;
					case 1:
					{
						SignMine(show, x, y);
						DisplayBoard(show, ROW, COL);
						break;
					}
					default:
					{
						printf("������Ч������������");
						break;
					}
					}					
				}
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}

//ɨ��
//1. �����Ĺ��ܣ��̣�
//2. ��ǹ��ܣ��̣�
//3. չ��һƬ�Ĺ��ܣ�����




