#include <stdio.h>

#define PI 3.1415926
 
int main()
{
	int R;
	double c,v;
	
	printf("������뾶��\n"); 
	scanf("%d",&R);
	
	c = 2*PI*R;
	v = (4/3)*PI*(R*R*R);
	
	printf("Ȧ���ܳ���%.4lf\n��������%.4lf\n",c,v);
	
   return 0;
}
