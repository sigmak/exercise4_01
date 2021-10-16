#include <stdio.h>
#include <stdlib.h>
#define MAX 10    //배열의 크기 지정

int main(void)
{
	int input, i, j, temp, b[MAX] = { 0, };
	char ch = 0x00;
	for (i = 0; i < MAX; i++) {
		scanf("%d", &input);
		b[i] = input;
	}
	while(ch!='A' && ch!= 'D' )
		scanf("%c", &ch);

	//정렬 알고리즘 참고 : https://m.blog.naver.com/ndb796/220752782634
	switch (ch)
	{
		case 'A':
			//오름차순 정렬
			for (i = 0;i<MAX;i++){
				for (j = i + 1; j<MAX; j++){
					if (*(b + i) > *(b + j)){
						temp = *(b + i);
						*(b + i) = *(b + j);
						*(b + j) = temp;
					}
				}
			}
			break;
		case 'D':
			//내림차순 정렬
			for (i = 0;i<MAX;i++) {
				for (j = i + 1; j<MAX; j++) {
					if (*(b + i) < *(b + j)) {
						temp = *(b + i);
						*(b + i) = *(b + j);
						*(b + j) = temp;
					}
				}
			}
			break;
	}
	for (i = 0;i < MAX;i++) {
		printf("%d ", b[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

