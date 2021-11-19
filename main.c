#include <stdio.h>
#include <stdlib.h>
#define MAX 200

int main(void) {

	int i,j,k, cnt;
	char aStr[MAX] = { 0x00, };
	scanf("%[^\n]s", aStr);  //Enter키 전까지 입력받음.
	//대문자 먼저,       소문자 나중에... 입력된 값만 카운팅
	// 65~90    (갭 32)     97~122
	printf("<전체 알파벳의 갯수>\n");
	for(i=0;i<=32; i=i+32){
		for (j = 65+i;j <= 90+i; j++) {
			cnt = 0;
			for (k = 0;k < MAX;k++) 
				if (j == (int)aStr[k]) cnt = cnt + 1;
			if (cnt > 0) printf("%c : %d\n", j, cnt);
		}
	}
	system("pause");
	return 0;
}
