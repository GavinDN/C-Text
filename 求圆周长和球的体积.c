#include <stdio.h>

#define PI 3.1415926
 
int main()
{
	int R;
	double c,v;
	
	printf("请输入半径：\n"); 
	scanf("%d",&R);
	
	c = 2*PI*R;
	v = (4/3)*PI*(R*R*R);
	
	printf("圈的周长：%.4lf\n球的体积：%.4lf\n",c,v);
	
   return 0;
}
