#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HANG 3
#define LIE 3

//���������� 
void InitQi(char Qi[HANG][LIE], int hang, int lie);//��ʼ������ 
void DisplayQi(char Qi[HANG][LIE], int hang, int lie);//��ӡ���� 
void player(char Qi[HANG][LIE], int hang, int lie);//��Ҳ���
void Computer(char Qi[HANG][LIE], int hang, int lie);//����������� 
char Winner(char Qi[HANG][LIE], int hang, int lie);//�ж�ʤ�� 
