#include <stdio.h>

//����һ���ṹ�� 
struct Student
{
	short age;//�����ͱ���age 
	char name[10];//�ַ�������name[10]�����ڴ������ 
	int ID;//���ͱ���ID�����ڴ��ѧ�� 
};

int main()
{
	//�����ýṹ�����ͣ����������͵Ľṹ����� 
	struct Student s1 = {19,"Gavin",20201215};
	//����ָ���ȡ�ñ����ĵ�ַ 
	struct Student* p = &s1; 
	
	//��ָ��p��ӡѧ����Ϣ 
	printf("ѧ��������%s\n",p->name); 
	printf("ѧ�����䣺%d\n",p->age);
	printf("ѧ��ѧ�ţ�%d\n",p->ID);	
	return 0;
} 

