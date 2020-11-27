#include <stdio.h>

int main()
{
	int x,y,z,n;//定义四个整型的变量 
	
	printf("请输入一个数：\n"); 
	scanf("%d",&y); //输入你想乘到数，如输入9，则以9*9=81结束运算 
	
	for(x=1;x<=y;x++)
	{
		for(z=1;z<=x;z++)
		{
			printf("%d*%d=%d ",z,x,x*z);
		}
		printf("\n");
	}
	return 0;
} 
