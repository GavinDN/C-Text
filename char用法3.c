#include <stdio.h>

int main() 
{
	char test;//定义一个字符型变量 test 

	printf("请问您是男生还是女生？（请输入M/F）\n");
	scanf("%c",&test); 
	 
	switch(test)
	{
		case 77: printf("原来你是男生啊！");break;
		case 70: printf("原来你是女生啊！");break;
		default : printf("输入错误！");
	} 
		
	return 0;
}
