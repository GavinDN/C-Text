#include <stdio.h>

#define PI 3.1415926
 
int main()
{
	int R;
	double l,v;
	
	printf("������뾶��\n"); 
	scanf("%d",&R);
	
	l = 2*PI*R;
	v = (4/3)*PI*(R*R*R);
	
	printf("Ȧ���ܳ���%.4lf\n��������%.4lf\n",l,v);
	
   return 0;
}
