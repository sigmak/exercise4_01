/*
설명 : 년도를 입력받고 해당 년도가 윤년인지 출력하는 코드를 작성하시오.(삼항 연산자 이용)
 입력받은 년도가 4로 나누어 떨어지면 윤년
 입력받은 년도가 4로 나우어 떨어지고 100으로 나누어 떨어지면 평년
 입력받은 년도가 4, 100, 400으로 나누어 떨어지면 윤년
 이외의 나머지 입력 년도는 평년이다.

(ex1 입력): 400
(ex1 출력): 윤년입니다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int year, result1;

	printf("년도를 입력해주세요\n");
	scanf("%d", &year);

	result1 = (year % 4 != 0)   ? printf("윤년이 아닙니다.\n") :
		      (year % 100 != 0) ? printf("윤년입니다.\n") :
		      (year % 400 == 0) ? printf("윤년입니다.\n") :printf("윤년이 아닙니다.\n") ;

	system("pause");
	return 0;
}
