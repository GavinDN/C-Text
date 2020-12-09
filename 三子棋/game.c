#include "game.h"

void InitQi(char Qi[HANG][LIE], int hang, int lie)
{
	int i = 0,j = 0;
	for(i=0;i<hang;i++)
	{
		for(j=0;j<lie;j++)
		{
			Qi[i][j]= ' ';
		}
	}
}

void DisplayQi(char Qi[HANG][LIE], int hang, int lie)
{
	int i = 0;
	printf("|---|---|---|\n"); 
	for(i=0;i<hang;i++)
	{
		printf("| %c | %c | %c | \n",Qi[i][0],Qi[i][1],Qi[i][2]);
		printf("|---|---|---|\n"); 
	}
	printf("\n"); 
}

void player(char Qi[HANG][LIE], int hang, int lie)
{
	int x = 0,y = 0;
	 
	printf("���ȿ�ʼ��\n");
	
	while(1)
	{ 
		printf("������ϲ��������->");
		scanf("%d %d",&x,&y);
		printf("\n");
		
		if(x>=1 && x<=HANG && y>=1 && y<=LIE)
		{
			if(Qi[x-1][y-1] == ' ')
			{
				Qi[x-1][y-1] = 'X';
				break;
			}
			else
			{
				printf("�ô����걻ռ�ã�\n");
			}
		}
		else
		{
			printf("���������������������룡"); 
		}
	}
}

void Computer(char Qi[HANG][LIE], int hang, int lie)
{
	int x = 0,y = 0;
	printf("���Ե�ѡ��Ϊ��\n");
	
	while(1)
	{
		x=rand() % HANG;
		y=rand() % LIE;
		if(Qi[x][y] == ' ')
		{
			Qi[x][y] = 'O';
			break;
		}	
	}
}

//1��ʾ����������0��ʾ����δ��
int IsFull(char Qi[HANG][LIE], int hang, int lie)
{
	int i = 0, j = 0;
	
	for(i=0;i<HANG;i++)
	{
		for (j=0;j<LIE;j++)
		{
			if(Qi[i][j] == ' ')
			{
				return 0;//δ�� 
			}
		}
	} 
	return 1;//���� 
} 

//�ж���Ӯ 
char Winner(char Qi[HANG][LIE], int hang, int lie)
{
	int i = 0;
	
	//�жϺ����� 
	for(i=0;i<HANG;i++)
	{
		if(Qi[i][0] == Qi[i][1] && Qi[i][1] == Qi[i][2] && Qi[i][1] != ' ')
		{
			return Qi[i][1];
		} 
	} 
	
	//�ж������� 
	for (i=0;i<LIE;i++)
	{
		if(Qi[0][i] == Qi[1][i] && Qi[1][i] == Qi[2][i] && Qi[1][i] != ' ')
		{
			return Qi[1][i];
		} 
	} 
	
	//�Խ��ߵ��ж� 
	if(Qi[0][0] == Qi[1][1] && Qi[1][1] == Qi[2][2] && Qi[1][1] != ' ')
	{
		return Qi[1][1];
	}
	
	//�Խ��ߵ��ж� 
	if(Qi[2][0] == Qi[1][1] && Qi[1][1] == Qi[0][2] && Qi[1][1] != ' ')
	{
		return Qi[1][1];
	}
	
	if (1 == IsFull(Qi,HANG,LIE)) 
	{
		return 'Q';
	}
	return 'C'; 
} 
