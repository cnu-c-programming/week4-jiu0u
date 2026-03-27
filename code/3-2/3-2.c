#include <stdio.h>

void swap_endian(int* x) {
	unsigned char* p = (unsigned char*)x;
	unsigned char temp = "";
	
	// 12 / 34 / 56 / 78
	//  0    1    2    3
	// 78 / 56 / 34 / 12
	// 3 2 1 0

	temp = p[0];
	p[0] = p[3];
	p[3] = temp;

	temp = p[1];
	p[1] = p[2];
	p[2] = temp;

	x = p;
}


int main() {
	int x = 0x12345678;

	printf("%x\n", x);
	swap_endian(&x);
	printf("%x\n", x);

	return 0;
}
