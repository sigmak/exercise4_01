#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void) {

	int i, j, k, cnt;
	char aStr[MAX] = { 0x00, };
	scanf("%[^\n]s", aStr);  //Enter키 전까지 입력받음.
							 //대문자 먼저,       소문자 나중에... 입력된 값만 카운팅
							 // 65~90    (갭 32)     97~122
	//printf("<전체 알파벳의 갯수>\n");
	for (j = 65;j <= 90; j++) {
		cnt = 0;
		for (k = 0;k < MAX;k++)
			if (j == (int)aStr[k] || j+32 == (int)aStr[k]) cnt = cnt + 1;  //65 = A : 65+32 = a
		if (cnt > 0) printf("%c : %d\n", j, cnt);
	}
	system("pause");
	return 0;
}