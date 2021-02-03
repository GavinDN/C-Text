#include <stdio.h>

struct Std {
	char Name[10];
	char ID[9];
	char Num[12];
	short Age;
};

int main() {
	struct Std me = { "董楠", "03180213", "1369xxxxxx9", 19 };
	printf("姓名：%s\n学号：%s\n电话号码：%s\n年龄：%d\n", me.Name, me.ID, me.Num, me.Age);
	 
	return 0;
}
