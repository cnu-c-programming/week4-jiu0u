#include <stdio.h>

int main() {
	// 전체 초기화 (값 할당)
	int a[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");

	// 부분 초기화
	int b[5] = { 1,2 };
	for (int i = 0; i < 5; i++)
		printf("%d ", b[i]);
	printf("\n");

	// 전체 초기화
	int c[5] = { 0 };
	for (int i = 0; i < 5; i++)
		printf("%d ", c[i]);
	printf("\n");

	// 배열 크기 생략
	int d[] = { 10, 20, 30 };
	for (int i = 0; i < (sizeof(d) / sizeof(int)); i++)
		printf("%d ", d[i]);
	printf("\n");


	return 0;
}
