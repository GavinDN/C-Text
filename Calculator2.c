#include <stdio.h>

int menu()//����menu�������˵���ʾ 
{
	printf("***********************\n");
	printf("** ��������Ҫ�ļ���  **\n"); 
	printf("***********************\n");
}

int main()
{
	int a = 0 , b = 0;//int�������ͱ��� 
	char c;//char�����ַ��ͱ��� 
	
	menu(); //����menu���� 
	
	while(1)
	{
		scanf("%d%c%d",&a,&c,&b);	

		switch(c)//swtich�ж���� 
		{
			case '+':		
			printf("%d+%d=%d\n",a,b,a+b);//�ӷ� 
			break;
				
			case '-':
			printf("%d-%d=%d\n",a,b,a-b);//���� 
			break;
			
			case '*':
			printf("%d*%d=%d\n",a,b,a*b);//�˷� 
			break;
			
			case '/':
			printf("%d/%d=%d\n",a,b,a/b);//���� 
			break;
			
			default:
				printf("��������\n");//���� 
		}
	}
	return 0;
} 
