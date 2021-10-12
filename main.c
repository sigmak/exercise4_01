#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//√‚√≥ : https://m.cafe.daum.net/c-study/4tdN/436
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i < n; i++) {
		for (j = n; j > i; j--) printf(" ");
		for (j = 0; j < i * 2 - 1; j++) printf("*");
		printf("\n");
	}
	for (; i >= 0; i--) {
		for (j = n; j > i; j--) printf(" ");
		for (j = 0; j < i * 2 - 1; j++) printf("*");
		printf("\n");
	}

	system("pause");
	return 0;
}
