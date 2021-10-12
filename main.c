/*
설명 : 다음을 참고로 표준입력으로 받은 월(month)에 해당하는 분길르 출력하는 프로그램을 작성하시오.
1사분기:1,2,3월 / 2사분기: 4,5,6월 / 3사분기:7,8,9월 / 4사분기:10,11,12월
입력 : 월(month)을 입력하세요.
출력 : 월에 해당하는 분기를 출력하세요/
예시 입력1  / 예시 출력 1
1             1사분기
예시 입력2  / 예시 출력 2
8             3사분기

*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int month = 0;
	scanf("%d", &month);
	if (3 >= month) {
		printf("1사분기\n");
	}
	else if (month>3 && 6 >= month) {
		printf("2사분기\n");
	}
	else if (month>6 && 9 >= month) {
		printf("3사분기\n");
	}
	else if (month>9 && 12 >= month) {
		printf("4사분기\n");
	}
	system("pause");
	return 0;
}

