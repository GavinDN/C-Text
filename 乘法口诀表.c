#include <stdio.h>

int main()
{
	int x,y,z,n;//�����ĸ����͵ı��� 
	
	printf("������һ������\n"); 
	scanf("%d",&y); //��������˵�����������9������9*9=81�������� 
	
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
