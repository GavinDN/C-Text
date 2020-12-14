#include<stdio.h>

int main()
{
	int a,b;
	printf("请输入两个整数：\n");
		
	while(1)
	{ 
		scanf("%d %d",&a,&b);
	
		if(a%b==0)//%a对b取余 
		{
			printf("a能被b整除\n");
		}
		else
		{
			printf("a不能被b整除\n");
		}
		printf("请重新输入两个整数：\n");
	}
	return 0;
}
