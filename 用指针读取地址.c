#include <stdio.h>

int main()
{
	int i=0;
	int* p = &i;//把i的地址存放在指针p中 
 	
	printf("%p\n",p);//读取地址 
	printf("%p",p+1);//int型为四个字节，所以读取的地址在比之前多四个字节 
	
	return 0;
} 
