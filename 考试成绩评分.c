#include <stdio.h>

int main()
{ 
	int n;
	char x;
	
	printf("请输入分数：\n");
	while(1)
	{	
		scanf("%d",&n);//输入一个数n 
	
		if(n<=100 && n>=90)x='A';//100~90为A,&&是"逻辑与"表示两边条件都满足 
		else if(n<90 && n>=80)x='B';//80~89为B 
		else if(n<80 && n>=70)x='C';//70~79为C
		else if(n<70 && n>=60)x='D';//60~69为D
		else if(n<60 && n>=0)x='E';//0~59为E 
		else 
		{
			printf("您输入的有误！请重新输入！\n重新输入：");
			continue;
		}
		printf("您的成绩评分为：%c\n继续输入：",x);//输出评分，%c为字符型
 	}
	return 0;
} 
