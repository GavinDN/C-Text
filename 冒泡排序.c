#include<stdio.h>

int main()
{
 	int i,k,q;
 	int a[10];

	printf("������10�����֣�\n");
	
	for(i=0;i<10;i++)//��������������δ��뵽a[10]�� 
 	{
  		scanf("%d",&a[i]);
 	}
 	
 	for(k=0;k<9;k++)//������㷨 
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
	
	printf("������ɣ�");
	 
 	for(i=0;i<10;i++)//��10������������������ 
 	{
 		printf("%d ",a[i]);
 	}
 	return 0;
}
