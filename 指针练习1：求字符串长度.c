#include <stdio.h>

//strlen ���ַ������ȣ�ָ�룩 
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while(*end != '\0')
	{
		end++;
	}
	return end - start;//ָ��-ָ�� (3-0=3)
}

int main()
{
	char arr[] = "bit";//b i t \0 
	int a = my_strlen(arr);
	printf("%d\n",a);
	return 0;
} 
