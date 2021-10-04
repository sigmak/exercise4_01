/*
설명:

돈을 입력받아 달러는 원으로 원은 달러로 변환하는 프로그램을 작성하시오.
(1원=0.00087달러, 1달러=1152원)

입력:
변환할 돈과 변환할 화폐에 해당하는 알파벳을 입력한다.
ex)1000 w (1000원을 달러로 변환) / 1000 d (1000달러를 원화로 변환)

출력:
입력 받은 알파벳이 w이면 돈을 달러로, d이면 돈을 원화로 변환한다.

예시입력1    예시출력1
1000 w        0.87000달러
예시입력2    예시출력2
1000 d        1152000원

*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int money;
	float won, dollar;
	char currency;

	scanf("%d %c", &money, &currency);
	switch (currency) {
		case 'D': case 'd':
			won = money * 1152;
			if (won - (int)won == 0) {
				printf("%d원\n", (int)won);
			} else {
				printf("%.5f원\n", won);
			}
			break;
		case 'W':case 'w':
			dollar = money * 0.00087;
			if (dollar - (int)dollar == 0) {
				printf("%d달러\n", (int)dollar);
			}
			else {
				printf("%.5f원달러\n", dollar);
			}
			break;
		default:
			printf("지원되지 않는 화폐입니다.\n");
	}
	system("pause");
	return 0;
}