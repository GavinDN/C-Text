#include <stdio.h>

int main() 
{
	char i;//����һ���ַ��ͱ��� 
	
	printf("������һ��ʮ���Ƶ�����");
	scanf("%d",&i);//ʮ������������ 
	if(i >= 0 && i <= 127)
	{
		printf("������ӦASCII���ķ���Ϊ��%c\n",i);//��ӡ�ַ�
	} 
	else printf("�������!\n"); 

	return 0;
}
