#include <stdio.h>

int main()//��if�������ѧ���ɼ��������� 
{
	int n;
	char x;
	
	while(1)
	{
		printf("���������ĳɼ���");
		scanf("%d",&n);
	
		if(n<=100 && n>=90)x='A';//100~90Ϊ A 
		else if(n<90 && n>=80)x='B';//80~89Ϊ B 
		else if(n<80 && n>=70)x='C';//70~79Ϊ C
		else if(n<70 && n>=60)x='D';//60~69Ϊ D
		else if(n<60 && n>=0)x='E';//0~59Ϊ E 
		else 
		{
			printf("�����ʽ����ȷ�����������룡\n");
			continue;//������ǰѭ�� 
		}
		printf("���ĳɼ�����Ϊ��%c\n",x);//������֣�%cΪ������
 	}
	return 0;
} 
