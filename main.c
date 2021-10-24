#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, temp, a[4] = { 0, };
	int* ptr = &a;

	for (i = 0; i < 4; i++)
		scanf("%d", ptr+i);

	//첫번째 값과 두번째 값을 더한 결과를 출력
	temp = *(ptr + 0) + *(ptr + 1);
	printf("%d\n", temp);

	//위 덧셈 연산 결과에서 세번째 입력값을 밴 결과를 출력
	temp = temp - *(ptr +2);
	printf("%d\n", temp);

	//위 뺄셈 연산 결과와 네번째 값을 곱한 결과를 출력
	temp = temp * *(ptr+3);
	printf("%d\n", temp);

/*
	for (i = 0; i < 4; i++)
		printf("\n%d", a[i]);
*/
	system("pause");
	return 0;
}

