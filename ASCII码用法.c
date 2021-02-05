#include <stdio.h>

int main()
{
	int i = 65;//"65" 对应ASCII码中的 "A" 
	printf("%c",i);
	
	return 0;
} 

//int main()
//{
//	char i = 0,num;
//	printf("请输入一个字符:");
//	scanf("%c",&i);//输入一个字符，并将其存放在 "i" 中 
//	printf("%d",i);//通过读取 "i" 的值，找到对应的ASCII码的十进制数并打印出来 
//	
//	return 0;
//} 
//
//int main()
//{
//	int i = 0;
//	printf("请输入您想打印的ASCII码对应的十进制数：");
//	scanf("%d",&i);//输入一个十进制数（存在于ASCII码表中），并将值存放到 "i" 中 
//	printf("%c",i);//通过读取 "i" 的值，找到对应的ASCII码，并打印出来 
//	
//	return 0;
//} 
