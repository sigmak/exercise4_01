#include <stdio.h>
#include <stdlib.h>
int getsum(int n); // 함수 원형
int main(void) {
	int max = 0;
	printf("1에서 n까지의 합을 구할 n을 입력하시오. >>");
	scanf("%d", &max);
	printf("1에서 %d까지의 합: %d\n", max, getsum(max));

	system("pause");
	return 0;
}

int getsum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum = sum + i; //4)
	return sum;
}