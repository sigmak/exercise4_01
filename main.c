#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include <stdio.h>
#include <stdlib.h>
#define AMAX 3 // 입력값 전체 갯수
int minNum(int *p) {
	int i, min = *(p + 0);
	for (i = 1;i < AMAX; i++) {
		if (min > *(p + i))
			min = *(p + i);
	}
	return min;
}
int main(void) {
	int i, a, *p =  malloc(sizeof(int) * AMAX); ;
	for (i = 0; i < AMAX;i++) {
		scanf("%d", &a);
		*(p+i) = a;
	}
	printf("Enter three integers : ");
	for (i = 0;i < AMAX; i++) {
		printf("%d ", *(p + i));
	}
	printf("\nSmallest value : %d \n", minNum(p));
	system("pause");
	return 0;
}