#include <stdio.h>

int main()
{
	int x,y,z,max,min;//定义五个整型变量 
	
	printf("请输入三个数:");
	scanf("%d %d %d",&x,&y,&z);
	max=x;//将x的值储存在max中
	min=x;//将x的值储存在min中
	if(max<y)max=y;//进行判断，若max<y,则把y的值给max
	if(max<z)max=z;//进行判断，若max<z,则把z的值给max
	if(min>y)min=y;//进行判断，若max>y,则把y的值给max
	if(min>z)min=z;//进行判断，若max>z,则把z的值给max
	
	printf("最大的数是:%d\n",max);//输出最大值 
	printf("最小的数是:%d",min);//输出最小值
	return 0;
} 
