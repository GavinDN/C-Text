#include <stdio.h>
#include "game.h"

//菜单界面 
void menu()
{
	printf(" ________________\n");
	printf("|                |\n");
	printf("| 1.开始  0.退出 |\n");
	printf("|________________|\n\n");
} 

//游戏算法 
void game()
{
	char num = 0; 
	char Qi[HANG][LIE] = {0};	
	InitQi(Qi,HANG,LIE);//初始化棋盘 
	DisplayQi(Qi,HANG,LIE);//打印棋盘 
	
	while(1)
	{
		//玩家操作
		player(Qi,HANG,LIE);
		DisplayQi(Qi,HANG,LIE);
		num = Winner(Qi,HANG,LIE);//判断是否胜利 
		if(num != 'C')
		{
			break;
		}
		//电脑随机下棋 
		Computer(Qi,HANG,LIE);
		DisplayQi(Qi,HANG,LIE);
		num = Winner(Qi,HANG,LIE);//判断是否胜利 
		if(num != 'C')
		{
			break;
		}
	}
	if(num == 'X')
	{
		printf("玩家胜利\n"); 
	}
	else if(num == 'O')
	{
		printf("电脑胜利\n"); 
	}
	else 
	{
		printf("平局\n"); 
	} 
}

//选择模式界面 
void choose()
{
	int n,h=1;
	srand((unsigned int)time(NULL)); 
	
	while(h)
	{
		menu(); 
		printf("请输入你的选择：\n");
		scanf("%d",&n); 
		
		switch(n)
		{
			case 0:
				printf("退出游戏！\n");
				h=0; 
			break;
			
			case 1:
				printf("游戏开始！\n\n");
				game();
			break;
			
			default:
				printf("输入有误！请重新输入：\n");
			break;
		}
	}
}

int main()
{
	choose();
	return 0;
} 
