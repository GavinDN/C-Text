#include<stdio.h>

int main()
{
 	int i,k,q;
 	int a[10];

	printf("请输入10个数字：\n");
	
	for(i=0;i<10;i++)//将输入的数字依次存入到a[10]中 
 	{
  		scanf("%d",&a[i]);
 	}
 	
 	for(k=0;k<9;k++)//排序的算法 
 	{
  		for(i=0;i<9-k;i++) 
 		{
  			if(a[i]>a[i+1])
  			{
  				q=a[i];
  				a[i]=a[i+1];
 				a[i+1]=q;
  			}
 		}
	}
	
	printf("排序完成：");
	 
 	for(i=0;i<10;i++)//将10个排序完的数依次输出 
 	{
 		printf("%d ",a[i]);
 	}
 	return 0;
}
