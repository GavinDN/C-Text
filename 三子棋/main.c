#include <stdio.h>
#include "game.h"

//�˵����� 
void menu()
{
	printf(" ________________\n");
	printf("|                |\n");
	printf("| 1.��ʼ  0.�˳� |\n");
	printf("|________________|\n\n");
} 

//��Ϸ�㷨 
void game()
{
	char num = 0; 
	char Qi[HANG][LIE] = {0};	
	InitQi(Qi,HANG,LIE);//��ʼ������ 
	DisplayQi(Qi,HANG,LIE);//��ӡ���� 
	
	while(1)
	{
		//��Ҳ���
		player(Qi,HANG,LIE);
		DisplayQi(Qi,HANG,LIE);
		num = Winner(Qi,HANG,LIE);//�ж��Ƿ�ʤ�� 
		if(num != 'C')
		{
			break;
		}
		//����������� 
		Computer(Qi,HANG,LIE);
		DisplayQi(Qi,HANG,LIE);
		num = Winner(Qi,HANG,LIE);//�ж��Ƿ�ʤ�� 
		if(num != 'C')
		{
			break;
		}
	}
	if(num == 'X')
	{
		printf("���ʤ��\n"); 
	}
	else if(num == 'O')
	{
		printf("����ʤ��\n"); 
	}
	else 
	{
		printf("ƽ��\n"); 
	} 
}

//ѡ��ģʽ���� 
void choose()
{
	int n,h=1;
	srand((unsigned int)time(NULL)); 
	
	while(h)
	{
		menu(); 
		printf("���������ѡ��\n");
		scanf("%d",&n); 
		
		switch(n)
		{
			case 0:
				printf("�˳���Ϸ��\n");
				h=0; 
			break;
			
			case 1:
				printf("��Ϸ��ʼ��\n\n");
				game();
			break;
			
			default:
				printf("�����������������룺\n");
			break;
		}
	}
}

int main()
{
	choose();
	return 0;
} 
