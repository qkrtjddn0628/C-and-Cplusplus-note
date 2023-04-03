#include<stdio.h>

int main() {
	// %d : 정수 출력(1, 2, 3, ..... 0, -1, -2, -3)
	printf("%d + %d = %d\n", 2, 3, 5);

	// %f : 실수 출력( 3.14, -2.0, ..)
	printf("%f\n", 3.14);
	printf("%.2f\n", 3.141592);	// 소수점 둘째자리까지만 반올림해서 출력


	// %g : 실수 출력 (지수 형태로도 출력)
	printf("%g\n", 3.141592);
	printf("%.3g\n", 8723984712.12837468723);

	// %c : 문자 출력 (알파벳, 숫자, 몇몇 기호, \n) - 한글, 한자, 유니코드는 출력이 안됨
	printf("%c %c %c\n", 'a', 'b', 'c');

	// %s : 문자열 출력 (문자들이 열거) - 한글 등 여러가지 사용가능
	printf("%s\n", "안녕하세요");

};


// printf : 실행결과를 보여주며 ()안에 있는 내용을 출력해주는 단어
// \n : 엔터키(줄바꿈)
// ; : 문장의 끝을 알리는 맞침표
/*
	주석 설정 : Ctrl + K + C
	주석 해제 : Ctrl + K + U 
*/