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
	int (*p)(int x,int y) = Add;//将函数Add的地址存放进*p中 
	printf("%d\n",(*p)(One,Two));
	
	return 0;
}
