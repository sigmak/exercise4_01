/*
설명
두 개의 정수를 입력하였을 때,두 정수 중 나중에 입력한 수만큼 먼저 입력한 정수를 비트연산하는 코드를 작성하시오.
-값일 경우 오른쪽 비트연산, +값일 경우 왼쪽 비트연산을 수행
결과값은10진수로 출력

예시1 입력 : 3 4
예시1 출력 : 48

예시2 입력 : 100 -2
예시2 출력 ; 25
------------------------
참고 : https://dojang.io/mod/page/view.php?id=174
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, count;

	printf("두 개의 정수를 입력해주세요\n");
	scanf("%d %d", &num1, &num2);
	//나중에 입력한 정수 부호 판단
	if (num2 >= 0) {
		printf("%d\n", num1 << num2);
	} else {
		printf("%d\n", num1 >> abs(num2)); // num2 가 음수이므로 절대값 함수 사용함.
	}
	system("pause");
	return 0;
}