#include <stdio.h>

int main()
{ 
	int n;
	char x;
	
	printf("�����������\n");
	while(1)
	{	
		scanf("%d",&n);//����һ����n 
	
		if(n<=100 && n>=90)x='A';//100~90ΪA,&&��"�߼���"��ʾ�������������� 
		else if(n<90 && n>=80)x='B';//80~89ΪB 
		else if(n<80 && n>=70)x='C';//70~79ΪC
		else if(n<70 && n>=60)x='D';//60~69ΪD
		else if(n<60 && n>=0)x='E';//0~59ΪE 
		else 
		{
			printf("��������������������룡\n�������룺");
			continue;
		}
		printf("���ĳɼ�����Ϊ��%c\n�������룺",x);//������֣�%cΪ�ַ���
 	}
	return 0;
} 
