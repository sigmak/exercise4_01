/*
결과는 이 정수를 맞추어 보세요>>24
맞추어야 할 정수가 입력한 24보다 큽니다.
결과는 이 정수를 맞추어 보세요>>26
맞추어야 할 정수가 입력한 26보다 작습니다.
결과는 이 정수를 맞추어 보세요>>25
*/
#include <stdio.h>
#include <stdlib.h>
void func(int x) {
	int number=0;
	while (number != x) {
		printf("이 정수를 맞추어 보세요>>");
		scanf("%d", &number);
		printf("\n");
		if (number < x) printf("맞추어야 할 정수가 입력한 %d보다 큽니다\n", number);
		else if (number > x) printf("맞추어야 할 정수가 입력한 %d보다 작습니다\n", number);
		else printf("정답입니다.\n");
	}
}
int main(void) {
	func(25);
	system("pause");
	return 0;
}