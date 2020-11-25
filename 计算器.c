#include <stdio.h>

int menu()
{
	printf("***********************\n");
	printf("** 输入你想要的计算  **\n"); 
	printf("***********************\n");
}

int main()
{
	int a = 0 , b = 0;
	char c; 
	
	menu(); 
	
	while(1)
	{
		scanf("%d%c%d",&a,&c,&b);	

		switch(c)
		{
			case '+':		
			printf("%d+%d=%d\n",a,b,a+b);
			break;
				
			case '-':
			printf("%d-%d=%d\n",a,b,a-b);
			break;
			
			case '*':
			printf("%d*%d=%d\n",a,b,a*b);
			break;
			
			case '/':
			printf("%d/%d=%d\n",a,b,a/b);
			break;
			
			default:
				printf("输入有误！\n");
		}
	}
	return 0;
} 
