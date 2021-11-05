
#include <stdio.h>
#include <stdlib.h>

/*
number : 약수를 구할 수
gubun : 1이면 약수들을 화면에 출력, 1이 아니면 출력안함.
*/
int getDivisorCnt(int number, int gubun) {
	//참고 : https://m.blog.naver.com/manniz/221012964994
	int i,count = 0;
	for (i = 1;i <= number;i++)	{
		if (number % i == 0) {
			count = count + 1;
			if (gubun == 1) {printf("%d ", i);}
		}
	}
	if (gubun == 1) { printf("\n"); }
	return count;
}

int main(void)
{
	int a;
	scanf("%d", &a);

	printf("%d\n", getDivisorCnt(a, 0));

	system("pause");
	return 0;
}
