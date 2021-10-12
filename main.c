#include <stdio.h>
#include <stdlib.h>
#define CRTSECURENOWARNINGS

int main(void)
{
	char n1, n2;
	do
	{
		printf("임의의 문자를 하나만 입력하세요: ");
		scanf("%c", &n1);
		getchar(); //이게 핵심임.  참고 : https://studyc.tistory.com/9
		if (n1 == 'Q') {
			break;
		}
		else {
			if (n1 >= 'A' && n1 <= 'Z')
				n2 = n1 + 32;
			else if (n1 >= 'a' && n1 <= 'z')
				continue;
			printf("입력하신 문자 '%c'는 영문 대문자 이며 변환하면 '%c'입니다.", n1, n2);
		}
		printf("\n");
	} while (1);

	system("pause");
	return 0;
}