/*
아래 처럼 출력결과가 표시되도록

buy list
-----------------
carrot    1000won
toy       20000won
clothes   430000won
*/

#include <stdio.h>
#include <stdlib.h>

struct sBuylist {   // 구조체 정의
	int carrot;  // 구조체 멤버 1 
	int toy;     // 구조체 멤버 2
	int clothes; // 구조체 멤버 3
};

int main(void) {

	struct sBuylist buylist;

	buylist.carrot    = 1000;
	buylist.toy      = 20000;
	buylist.clothes = 430000;

	printf("buy list\n");
	printf("-----------------\n");
	printf("carrot    %dwon\n", buylist.carrot);
	printf("toy       %dwon\n", buylist.toy);
	printf("clothes   %dwon\n", buylist.clothes);

	system("pause");
	return 0;
}