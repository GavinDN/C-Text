#include <stdio.h>

int main()
{
	int x,y,z,max,min;//����������ͱ��� 
	
	printf("������������:");
	scanf("%d %d %d",&x,&y,&z);
	max=x;//��x��ֵ������max��
	min=x;//��x��ֵ������min��
	if(max<y)max=y;//�����жϣ���max<y,���y��ֵ��max
	if(max<z)max=z;//�����жϣ���max<z,���z��ֵ��max
	if(min>y)min=y;//�����жϣ���max>y,���y��ֵ��max
	if(min>z)min=z;//�����жϣ���max>z,���z��ֵ��max
	
	printf("��������:%d\n",max);//������ֵ 
	printf("��С������:%d",min);//�����Сֵ
	return 0;
} 
