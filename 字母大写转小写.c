#include <stdio.h>

int main()
{
	char x,y;
	printf("������һ����д��ĸ��"); 
	x=getchar();//����һ����д��ĸ�����丳ֵ���ַ��ͱ���x 
	y=x+32;//x��ֵ+32֮��õ�Сд��ĸ��ASCII�룬�����䴢����y�� 
	printf("��д��ĸ��%c\nСд��ĸ��%c\n",x,y);//������ַ� 
	return 0;
}
