#include <stdio.h>

int menu()//定义menu函数，菜单显示 
{
	printf("***********************\n");
	printf("** 输入你想要的计算  **\n"); 
	printf("***********************\n");
}

int main()
{
	int a = 0 , b = 0;//int定义整型变量 
	char c;//char定义字符型变量 
	
	menu(); //调用menu函数 
	
	while(1)
	{
		scanf("%d%c%d",&a,&c,&b);	

		switch(c)//swtich判断语句 
		{
			case '+':		
			printf("%d+%d=%d\n",a,b,a+b);//加法 
			break;
				
			case '-':
			printf("%d-%d=%d\n",a,b,a-b);//减法 
			break;
			
			case '*':
			printf("%d*%d=%d\n",a,b,a*b);//乘法 
			break;
			
			case '/':
			printf("%d/%d=%d\n",a,b,a/b);//除法 
			break;
			
			default:
				printf("输入有误！\n");//报错 
		}
	}
	return 0;
} 
