#include <stdio.h>

int main() 
{
	char test;//����һ���ַ��ͱ��� i 

	printf("����������������Ů������������M/F��\n");
	scanf("%c",&test); 
	 
	switch(test)
	{
		case 77: printf("ԭ��������������");break;
		case 70: printf("ԭ������Ů������");break;
		default : printf("�������");
	} 

		
	return 0;
}
