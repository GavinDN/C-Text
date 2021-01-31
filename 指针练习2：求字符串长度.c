#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)//const 断言 
{
	int count = 0;
	assert(str != NULL);//保证指针的有效性 
	
	while(*str != '\0')
	{
		count++;//用于记录长度的变量 
		str++;
	}
	return count;//把count的值返回 
}

int main()
{
	char arr[] = "Gavin";//G a v i n \0 
	int Hl = my_strlen(arr);
	
	printf("%d\n",Hl);
	return 0;
} 
