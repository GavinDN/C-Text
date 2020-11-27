#include <stdio.h>

int main()//用if语句来对学生成绩进行评分 
{
	int n;
	char x;
	
	while(1)
	{
		printf("请输入您的成绩：");
		scanf("%d",&n);
	
		if(n<=100 && n>=90)x='A';//100~90为 A 
		else if(n<90 && n>=80)x='B';//80~89为 B 
		else if(n<80 && n>=70)x='C';//70~79为 C
		else if(n<70 && n>=60)x='D';//60~69为 D
		else if(n<60 && n>=0)x='E';//0~59为 E 
		else 
		{
			printf("输入格式不正确，请重新输入！\n");
			continue;//结束当前循环 
		}
		printf("您的成绩评分为：%c\n",x);//输出评分，%c为浮点型
 	}
	return 0;
} 
