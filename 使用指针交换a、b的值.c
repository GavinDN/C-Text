#include <stdio.h>

int chage(int* p1,int* p2)
{
	int ch = 0;
	ch = *p1;
	*p1 = *p2;
	*p2 = ch;
}

int main()
{
	int a = 10, b=20;
	int* p1;
	int* p2;
	
	printf("*************************\n");
	printf("a的值为：%d , b的值为：%d\n",a,b);
	chage(&a,&b);
	printf("*************************\n");
	printf("***      交换后       ***\n");
	printf("*************************\n");
	printf("a的值为：%d , b的值为：%d\n",a,b);
	printf("*************************\n");
	return 0;
}
