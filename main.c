/*
40km와 400km를 각각 마일(mile) 단위로 출력하는 프로그램을 작성하시오. 단, 1km는 0.621371마일(mile) 이다.
40km, 400km를 마일 단위로 변환 후 값을 출력한다.
입력 없음
예시 출력
40km to mile : 24.854840
400km to mile : 248.548400

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double convertMile = 0.621371;
	int A;
	A = 40;
	printf("\n%dkm to mile : %f\n", A, A* convertMile);

	A = 400;
	printf("\n%dkm to mile : %f\n", A, A* convertMile);

	system("pause");
	return 0;
}