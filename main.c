/*
반복문 while문을 사용하여 0부터 20까지의 3의 배수를 출력하는 프로그램
int n = 0, max = 20;
while (___________________) {
	printf("%4d", n);
	(__________________);
}
printf("\n");

출력결과
0 3 6 9 12 15 18
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, max = 20;
	while (n < 20) {
		printf("%4d", n);
		n = n + 3;
	}
	printf("\n");
	system("pause");
	return 0;
}
