#include <stdio.h>

int add(int x,int y)//加法 
{
	return x+y;
}

int sub(int x,int y)//减法
{
	return x-y;
} 

int mul(int x,int y)//乘法 
{
	return x*y;
}

int div(int x,int y)//除法 
{
	return x/y;
}

int main()
{
	int num1 = 0 , num2 = 0 , num3 = 0 , repeat = 0;
	int choose = 1;
	
	while(choose)
	{
		printf("**********************************************\n");//界面显示 
		printf("**                                          **\n");
		printf("**      Welcome to Gavin's calculator!      **\n");
		printf("**                                          **\n");
		printf("**********************************************\n");
		printf("**                                          **\n");
		printf("**   1. 加法   2. 减法   3. 乘法   4. 除法  **\n");
		printf("**                                          **\n"); 
		printf("**********************************************\n");
		printf("**                                          **\n");
		printf("** Please select your method of calculation **\n");
		printf("**                                          **\n");
		printf("**********************************************\n");
		
		scanf("%d",&choose);//输入你的选择 
		
		switch(choose)//choose变量的使用 
		{
			case 1:
			{
				printf("Please select two Numbers to add:\n");
				scanf("%d %d",&num1,&num2);
				num3 = add(num1,num2);
			};break; 
			
			case 2:
			{
				printf("Please select two Numbers to sub:\n");
				scanf("%d %d",&num1,&num2);
				num3 = sub(num1,num2);
			}break; 
			
			case 3:
			{
				printf("Please select two Numbers to mul:\n");
				scanf("%d %d",&num1,&num2);
				num3 = mul(num1,num2);
			}break;
			
			case 4:
			{
				printf("Please select two Numbers to div:\n");
				scanf("%d %d",&num1,&num2);
				num3 = div(num1,num2);			
			}break;
			default :
				printf("Error ,Please reselect !\n");
		}
		printf("结果为：%d\n\n",num3);
	}
	return 0;
}
