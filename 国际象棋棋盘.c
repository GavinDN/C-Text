#include <stdio.h>

int main()
{
	int x,y;
	for(x=1;x<=8;x++)
	{
		if(x%2==0)
		{
			for(y=1;y<=4;y++)
				printf("  ¡ö");
		}
		else
		{
			for(y=1;y<=4;y++)
				printf("¡ö  ");
		}
		printf("\n");
	}
}
