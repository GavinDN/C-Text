#include<stdio.h>

int main()
{
	int a,b;
	printf("����������������\n");
		
	while(1)
	{ 
		scanf("%d %d",&a,&b);
	
		if(a%b==0)//%a��bȡ�� 
		{
			printf("a�ܱ�b����\n");
		}
		else
		{
			printf("a���ܱ�b����\n");
		}
		printf("��������������������\n");
	}
	return 0;
}
