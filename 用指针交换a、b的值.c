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
	printf("a��ֵΪ��%d , b��ֵΪ��%d\n",a,b);
	chage(&a,&b);
	printf("*************************\n");
	printf("***      ������       ***\n");
	printf("*************************\n");
	printf("a��ֵΪ��%d , b��ֵΪ��%d\n",a,b);
	printf("*************************\n");
	return 0;
}
