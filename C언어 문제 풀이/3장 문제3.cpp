/*
	알파벳을 입력받아서 그다음 알파벳을 출력하는 프로그램을 만들어 보세요. 단.'Z'는 입력으로 들어오지 않는 다고 가정합니다.

	예시
	C
	D

*/
#include<stdio.h>
int main()
{
	char a;		// 입력받는 알파벳

	printf("대문자알파벳을 입력하세요 : ");
	scanf_s("%c", &a);

	printf("당신이 입력한 '%c'의 다음 알파벳은 ", a);

	char b = ++a;	// 입력받은 알파벳 + 1
	printf("'%c' 입니다.\n", b);

}