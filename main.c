#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input, i, b[5] = { 0, };
	int total, max, min;
	float mean;
	for (i = 0; i < 5; i++) {
		scanf("%d", &input);
		if (input < 0) {
			printf("잘못된 입력입니다.\n");
			i = i - 1;
		}else{
			b[i] = input;
		}
	}
	total = 0;
	max = b[0];
	min = b[0];
	for (i = 0; i < 5; i++) {
		total = total + b[i];
		//참고 : https://zetawiki.com/wiki/C%EC%96%B8%EC%96%B4_%EB%B0%B0%EC%97%B4%EC%9D%98_%EC%B5%9C%EB%8C%80%EA%B0%92,_%EC%B5%9C%EC%86%8C%EA%B0%92_%EA%B5%AC%ED%95%98%EA%B8%B0
		if (b[i] > max) max = b[i]; //최대값
		if (b[i] < min) min = b[i]; //최소값
	}
	printf("total = %d\n", total);
	mean = total / 5.0;
	printf("mean = %.2f\n", mean);
	printf("max = %d\n", max); 
	printf("min = %d\n", min);
	if (total < 350) {
		printf("불합격입니다.\n");
	} else if (total >= 350) {
		printf("합격입니다.\n");
	}
	system("pause");
	return 0;
}