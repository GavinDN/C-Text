#include <stdio.h>

//定义一个结构体 
struct Student
{
	short age;//短整型变量age 
	char name[10];//字符型数组name[10]，用于存放姓名 
	int ID;//整型变量ID，用于存放学号 
};

int main()
{
	//将利用结构体类型，创建该类型的结构体变量 
	struct Student s1 = {19,"Gavin",20201215};
	//利用指针读取该变量的地址 
	struct Student* p = &s1; 
	
	//用指针p打印学生信息 
	printf("学生姓名：%s\n",p->name); 
	printf("学生年龄：%d\n",p->age);
	printf("学生学号：%d\n",p->ID);	
	return 0;
} 

