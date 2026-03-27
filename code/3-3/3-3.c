#include <stdio.h>

int main() {
	printf("sizeof(int*) = %zu\n", sizeof(int*));
	printf("sizeof(double*) = %zu\n", sizeof(double*));
	printf("sizeof(char*) = %zu\n", sizeof(char*));
	printf("sizeof(void*) = %zu\n", sizeof(void*));
	// 포인터 크기는 자료형과 무관하게 os 비트 수에 의해 결정됨 (64bit --> 8byte)

	return 0;
}
