#include <stdio.h>

int add(int x,int y)//�ӷ� 
{
	return x+y;
}

int sub(int x,int y)//����
{
	return x-y;
} 

int mul(int x,int y)//�˷� 
{
	return x*y;
}

int div(int x,int y)//���� 
{
	return x/y;
}

int main()
{
	int num1 = 0 , num2 = 0 , num3 = 0 , repeat = 0;
	int choose = 1;
	
	while(choose)
	{
		printf("**********************************************\n");//������ʾ 
		printf("**                                          **\n");
		printf("**      Welcome to Gavin's calculator!      **\n");
		printf("**                                          **\n");
		printf("**********************************************\n");
		printf("**                                          **\n");
		printf("**   1. �ӷ�   2. ����   3. �˷�   4. ����  **\n");
		printf("**                                          **\n"); 
		printf("**********************************************\n");
		printf("ѡ������Ҫ�ļ���ģʽ��                        \n");
		
		scanf("%d",&choose);//�������ѡ�� 
		
		switch(choose)//choose������ʹ�� 
		{
			case 1:
			{
				printf("ѡ�����������:\n");
				scanf("%d %d",&num1,&num2);
				num3 = add(num1,num2);
			};break; 
			
			case 2:
			{
				printf("ѡ�����������:\n");
				scanf("%d %d",&num1,&num2);
				num3 = sub(num1,num2);
			}break; 
			
			case 3:
			{
				printf("ѡ�����������:\n");
				scanf("%d %d",&num1,&num2);
				num3 = mul(num1,num2);
			}break;
			
			case 4:
			{
				printf("ѡ�����������:\n");
				scanf("%d %d",&num1,&num2);
				num3 = div(num1,num2);			
			}break;
			default :
				printf("����������ѡ��!\n");
		}
		printf("���Ϊ��%d\n\n",num3);
	}
	return 0;
}
