/*
사용자에게 int형 변수를 입력받아서 계산후 출력하기
예시 입력 1   예시 출력 1     
3 4           48  

예시 입력 2   예시 출력 2
100 -2        25  
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, count;
	int result = 1;
	printf("두 개의 정수를 입력해주세요\n");
	scanf("%d %d", &num1, &num2);
	for (count = 0; count <= 1; count++) {
		result = result * num2;
	}
	if (num2 >= 0) {
		result = num1 * result;
	}
	else {
		result = num1 / result;
	}
	printf("결과 값=%d\n", result);
	system("pause");
	return 0;
}
