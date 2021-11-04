/*
설명:
두 정수를 입력 받아 두 정수의 +,-,*의 결과를 반환하는 함수 3개를 만들어 결과를 출력하는 프로그램을 작성하시오.
두 정수를 비교하여(큰수)-(작은 수)로 연산하시오.

입력:두 정수 입력
출력:입력 받은 두 정수의 +,-,* 연산값 출력

예시 입력1
2 5
예시 출력1
7 3 10
*/
#include <stdio.h>
#include <stdlib.h>
int add(int a, int b) {	return (a + b);}
int sub(int a, int b) {
	if (a > b) return (a - b);
	else return (b - a);
}
int Multiple(int a, int b) { return (a*b); }

int main(void)
{
	int a, b, c, d, e;
	scanf("%d %d", &a, &b);
	c = add(a, b);d = sub(a, b);e = Multiple(a, b);
	printf("%d %d %d\n", c, d, e);
	system("pause");
	return 0;
}