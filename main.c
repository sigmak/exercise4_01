#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, cnt=0;
	scanf("%d", &n);

	//while문 예제 참고 : https://by-man.tistory.com/359
	do
	{
		n = n / 10;
		cnt = cnt + 1;
	} while (n!=0);

	printf("%d\n", cnt);
	system("pause");
	return 0;
}