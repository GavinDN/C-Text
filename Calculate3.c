#include <stdio.h>
#include <stdlib.h> 

int Add(int x,int y)//�ӷ� 
{
	return x+y;
}

int Sub(int x,int y)//����
{
	return x-y;
} 

int Mul(int x,int y)//�˷� 
{
	return x*y;
}

int Div(int x,int y)//���� 
{
	return x/y;
}

//������ʾ 
void menu()
{
	printf("****************************************************\n");
	printf("**                                                **\n");
	printf("**         Welcome to Gavin's calculator!         **\n");
	printf("**                                                **\n");
	printf("****************************************************\n");
	printf("**                                                **\n");
	printf("** 1. �ӷ�   2. ����   3. �˷�   4. ����   0.�˳� **\n");
	printf("**                                                **\n"); 
	printf("****************************************************\n");
	printf("ѡ������Ҫ�ļ���ģʽ��                              \n");
}

//����ָ�������Ӧ��--ת�Ʊ� 
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
			printf("��������������Ҫ�����ֵ��\n");
			scanf("%d %d",&x,&y);
			printf("%d\n",p[n](x,y));	
		}
		else if(n == 0)
		{
			exit(0); 
		}
		else
		{
			printf("��������"); 
		} 	
	}
	return 0;
}	 
