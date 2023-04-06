#include<stdio.h>

int main()
{
	int i;
		
	// while문과 for의 비교
	//while문
	/*i = 1;
	while (i <= 10) {
		printf("%d\n", i);
		i++;

	}*/

	// for문
	for (i = 1; i <= 10; i++) {		//(i = 1;(초기화 시키고) i <= 10(조건을 확인하고); i++(특정변수에 증가 및 계산하게한다))
		printf("%d\n", i);		// 결과 출력
	}


	/*
		어떨때 for문으 사용하는가?
			- 일정하게 증가 및 감소되는 변수가 필요할 때
			- 배열의 모든 원소에 순차적으로 접근하고 싶을 때
			- 특정 횟수만큼 작업을 반복하고 싶을 때
	*/
}