#include<stdio.h>

void wrt(int n)
{
	if(n!=0)
	{
		wrt(n-1);
		printf("%d\n",n);
	}
}

int main()
{
	int n;
	printf("%������һ������");
	scanf("%d",&n);
	
	wrt(n);
	
	return 0;
} 
