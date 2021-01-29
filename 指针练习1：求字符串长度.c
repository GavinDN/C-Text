#include <stdio.h>

//strlen 求字符串长度（指针） 
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while(*end != '\0')
	{
		end++;
	}
	return end - start;//指针-指针 (3-0=3)
}

int main()
{
	char arr[] = "bit";//b i t \0 
	int a = my_strlen(arr);
	printf("%d\n",a);
	return 0;
} 
