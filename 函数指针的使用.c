#include <stdio.h>

#define One 5
#define Two 6 

int Add(int x,int y) 
{
	int num = 0;
	num = x + y;
	return num;
}

int main() 
{
	int (*p)(int x,int y) = Add;//������Add�ĵ�ַ��Ž�*p�� 
	printf("%d\n",(*p)(One,Two));
	
	return 0;
}
