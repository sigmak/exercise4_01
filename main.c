/*
설명 : 한화 1000만원으로 환전할 수 있는 일본 및 미국 화폐를 계산하는 코드를 작성하시오.
       미국 1달러는 1120원으로 계산
       일본 1엔은 11.21원으로 계산

출력 : 한화 1000만원으로 환전할 수 있는 미국, 일본 화폐를 계산하고 출력한다.

예시 출력 1
8928 달러
892060 엔

힌트 : 달러, 엔 등의 경우 소수점 단위로 존재할 수 없다.
       엔의 경우 계산 시 소수점 아래 단위가 출력되기 때문에,
       floor 함수를 사용하여 소수점 아래 값을 버리도록 한다.

#include <math.h> printf("%.f 엔\n", floor(kor_money / 11.21));
floor 함수 또한 사용을 위해서는 math.h 헤더를 include해야 한다.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int kor_money=10000000;

	printf("%.f 달러\n", floor(kor_money / 1120));
	printf("%.f 엔\n", floor(kor_money / 11.21));

	system("pause");
	return 0;
}