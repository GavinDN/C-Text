#include <stdio.h>

int main()
{
	int i=0;
	int* p = &i;//��i�ĵ�ַ�����ָ��p�� 
 	
	printf("%p\n",p);//��ȡ��ַ 
	printf("%p",p+1);//int��Ϊ�ĸ��ֽڣ����Զ�ȡ�ĵ�ַ�ڱ�֮ǰ���ĸ��ֽ� 
	
	return 0;
} 
