#include<stdio.h>

// 포인터를 가리키는 포인터
int main() {
	int a = 10;

	int* ptr;
	ptr = &a;

	int** ptr_ptr;
	ptr_ptr = &ptr;


	printf("a = %d\n", a);
	printf("&a = %d\n", &a);

	printf("ptr = %d\n", ptr);
	printf("&ptr = %d\n", &ptr);

	printf("**ptr_ptr = %d\n", **ptr_ptr);
}