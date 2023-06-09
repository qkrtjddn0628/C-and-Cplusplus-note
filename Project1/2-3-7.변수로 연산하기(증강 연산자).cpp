#include<stdio.h>
int main()
{
	//		// 증감 연산자
	//		int a = 5;
	//		printf("a는 원래 %d였다!\n", a);
	//		a++;	// a += 1; or a = a + 1; 과 같음
	//		printf("1 증가해서 %d이 됐다!!\n", a);
	//		a--;	// a -= 1; or a = a - 1; 과 같음
	//		printf("1 감소해서 %d가 됐다!!!\n", a);
	//		/*
	//			풀이
	//			a = 5 이다
	//			5 에서 a++를 했으므로 a+1이 된다. 즉 a = 6이다.
	//			6 에서 a==를 했으므로 a-1이 된다. 즉 a = 5이다.		
	//		*/

	// 전치, 후치 증가 연산(++?, --?)
	int a = 5;
	int b;

	b = ++a;			// b = a = a + 1;
	printf("== 전치 증가 연산 ==\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	b = a++;
	printf("=== 후치 증가 연산 ===\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	/*
		전치
		++a는 변수 앞에 연사자를 쓴다. 이때 b = ++a;라고 쓰면 a가 1 증가한 후, 증가된 값이 b에 들어간다.
		대입 전에 증가가 이루어지므로 전치 증가 연산이다.
		즉 a는 ++a이 되었으므로 6이 되었고, b는 b = ++a; 이므로 ++a가 6이여서 b는 6이 된다.

		후치
		a++;는 변수 뒤에 연산자를 쓴다. b = a++;라고 쓰면 a의 값이 b에 대입후 a가 1증가된다.
		즉 앞계산뒤 a는 6이며 b에도 6을 대입하게 된다. 그리고 a++; 이므로 a+1이 되므로 7이 된다.
		그러나 b는 a가 a++되기전에 대입을 먼저 받았으므로 6으로 대입을 받게 된다.

		결론
		6
		6
		7
		6

	*/

}