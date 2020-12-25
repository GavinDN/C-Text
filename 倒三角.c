#include <stdio.h>

int main()
{
	int i,j;
	
	for(i=0;i<20;i++)
	{
		for(j=0;j<20-i;j++)
		{ 
			printf("_");
		}
		printf("\n"); 
	} 
	return 0;
 } 
