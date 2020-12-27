#include <stdio.h>

int main()
{
	char x,y;
	printf("请输入一个大写字母："); 
	x=getchar();//输入一个大写字母，将其赋值给字符型变量x 
	y=x+32;//x的值+32之后得到小写字母的ASCII码，并将其储存在y中 
	printf("大写字母：%c\n小写字母：%c\n",x,y);//输出各字符 
	return 0;
}
