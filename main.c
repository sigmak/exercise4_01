/*
임의의 직각삼각형의 밑변은 4cm, 빗변이 5cm이라고 할 때, 이 삼각형의 높이는 몇 cm인지 계산하는 프로그램을 작성하시오.
단, 3개의 변수를 선언하여 사용하시오.
밑변이 4cm, 빗변이 5cm인 직각삼각형의 높이를 출력한다.
출력 예시
삼각형의 높이 : 3 cm

힌트
math.h 에 포함된 sqrt 함수를 아래 코드와 같이 사용하여 제곱근을 쉽게 구할 수 있다.
사용을 위해서는 코드 상단에 math.h 헤더를 include 하는 코드를 작성하여야 한다.
#include <math.h>
c = sqrt(c);
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int a = 4, b, c = 5;
	b = sqrt(c*c - a*a); // a^2 + b^2 = c^2 -> b^2 = c^2 - a^2 -> b = sqrt(c^2 - a^2)
	printf("\n삼각형의 높이 : %d \n", b);
	system("pause");
	return 0;
}