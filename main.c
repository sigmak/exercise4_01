#include <stdio.h>
#include <stdlib.h>
#define MAX 50

//참고 : https://4369.tistory.com/entry/scanf에서-공백을-포함한-문자열을-받는-방법
int main(void) {
	int i;
	char aStr[MAX] = { 0x00, };
	char b = 0x00;
	scanf("%[^\n]s", aStr);  //Enter키 전까지 입력받음.
	getchar();
	scanf("%c", &b);

	for (i = 0;i < MAX;i++) {
		if (b == aStr[i]) {
			printf("문자 %c의 인덱스 위치는 %d입니다.\n", b, i);
			break;
		}
	}
	system("pause");
	return 0;
}