#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)//const ���� 
{
	int count = 0;
	assert(str != NULL);//��ָ֤�����Ч�� 
	
	while(*str != '\0')
	{
		count++;//���ڼ�¼���ȵı��� 
		str++;
	}
	return count;//��count��ֵ���� 
}

int main()
{
	char arr[] = "Gavin";//G a v i n \0 
	int Hl = my_strlen(arr);
	
	printf("%d\n",Hl);
	return 0;
} 
