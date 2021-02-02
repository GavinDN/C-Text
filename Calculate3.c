#include <stdio.h>
#include <stdlib.h> 

int Add(int x,int y)//加法 
{
	return x+y;
}

int Sub(int x,int y)//减法
{
	return x-y;
} 

int Mul(int x,int y)//乘法 
{
	return x*y;
}

int Div(int x,int y)//除法 
{
	return x/y;
}

//界面显示 
void menu()
{
	printf("****************************************************\n");
	printf("**                                                **\n");
	printf("**         Welcome to Gavin's calculator!         **\n");
	printf("**                                                **\n");
	printf("****************************************************\n");
	printf("**                                                **\n");
	printf("** 1. 加法   2. 减法   3. 乘法   4. 除法   0.退出 **\n");
	printf("**                                                **\n"); 
	printf("****************************************************\n");
	printf("选择你需要的计算模式：                              \n");
}

//函数指针数组的应用--转移表 
int main()
{
	int n = 0, x = 0, y = 0;
	int (*p[])(int x,int y) = { 0, Add, Sub, Mul, Div};
	while(1)
	{
		menu();	
		scanf("%d",&n);	
		
		if(n >= 1 && n<=4)
		{
			printf("请输入两个您需要计算的值：\n");
			scanf("%d %d",&x,&y);
			printf("%d\n",p[n](x,y));	
		}
		else if(n == 0)
		{
			exit(0); 
		}
		else
		{
			printf("输入有误！"); 
		} 	
	}
	return 0;
}	 
