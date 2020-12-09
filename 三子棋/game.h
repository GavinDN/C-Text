#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HANG 3
#define LIE 3

//函数的声明 
void InitQi(char Qi[HANG][LIE], int hang, int lie);//初始化棋盘 
void DisplayQi(char Qi[HANG][LIE], int hang, int lie);//打印棋盘 
void player(char Qi[HANG][LIE], int hang, int lie);//玩家操作
void Computer(char Qi[HANG][LIE], int hang, int lie);//电脑随机下棋 
char Winner(char Qi[HANG][LIE], int hang, int lie);//判断胜负 
