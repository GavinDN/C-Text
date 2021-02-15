#include <stdio.h>

int main() 
{
	char i;//定义一个字符型变量 
	
	printf("请输入一个十进制的数：");
	scanf("%d",&i);//十进制数的输入 
	if(i >= 0 && i <= 127)
	{
		printf("该数对应ASCII码表的符号为：%c\n",i);//打印字符
	} 
	else printf("输入错误!\n"); 

	return 0;
}
