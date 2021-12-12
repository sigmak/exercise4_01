#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, cnt=0;
	scanf("%d", &n);

	printf("Divisors of %d : ", n);
	// Âü°í : https://manniz.tistory.com/entry/C%EC%96%B8%EC%96%B4-%EC%82%AC%EC%9A%A9%EC%9E%90%EA%B0%80
	//-%EC%9E%85%EB%A0%A5%ED%95%9C-%EC%A0%95%EC%88%98%EC%9D%98-%EB%AA%A8%EB%93%A0-%EC%95%BD%EC%88%98-%EC%B6%9C%EB%A0%A5
	for (int i = 1; i <= n; i++) 
	{ 
		if (n % i == 0) { 
			printf("%d ", i); 
			cnt = cnt + 1;
		}
	}
	printf("\n");
	printf("Number of Divisors of %d : %d\n", n, cnt);

	system("pause");
	return 0;
}