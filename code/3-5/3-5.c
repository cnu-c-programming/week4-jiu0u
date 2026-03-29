#include <stdio.h>

void my_print(char type, void* x) {
	switch (type)
	{
	case 'C':
		printf("%c\n", *(char*)x);
		break;
	case 'D': //?
		printf("%d\n", *(int*)x);
		break;
	case 'S':
		printf("%s\n", (char*)x);
		// c 자체가 문자열 시작점 주소값...
		break;
	}

}

int main() {
	int a = 0x61;
	char b = 'b';
	char* c = "hello world";

	my_print('C', &a);
	my_print('D', &b);
	my_print('S', c);
	my_print('C', c);

	return 0;
}
