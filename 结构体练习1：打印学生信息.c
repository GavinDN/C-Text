#include <stdio.h>

struct Std {
	char Name[10];
	char ID[9];
	char Num[12];
	short Age;
};

int main() {
	struct Std me = { "���", "03180213", "1369xxxxxx9", 19 };
	printf("������%s\nѧ�ţ�%s\n�绰���룺%s\n���䣺%d\n", me.Name, me.ID, me.Num, me.Age);
	 
	return 0;
}
