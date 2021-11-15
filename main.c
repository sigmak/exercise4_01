#include <stdio.h>
#include <stdlib.h>
//참고1 : https://starrykss.tistory.com/424
//참고2 : https://m.cafe.daum.net/c-study/4tdN/345
int main(void) {
	int *arr; //배열 이름을 포인터 변수로
	int  n, m;    // 배열의 크기(n x m)를 받을 변수
	int sum = 0, i, j;
	int avg = 0;

	scanf("%d %d", &n, &m);
	arr = (int *)malloc(sizeof(int) *(n*m));//int 형 배열을 n x m 개의 크기로 만듦
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", arr + i*n + j);
			sum = sum + arr[i*n + j];
		}
	}
	avg = sum / (n * m ); //평균점수 계산
	//(평균은 정수 연산으로 계산한다.정수형 합/정수형 행렬의 크기)
	//printf("avg = %d", avg);
	printf("\n");
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m; j++) {
			if (avg > arr[ i*n + j]) arr[i*n + j] = 0;
			printf("%d ", arr[i*n + j]);
		}
		printf("\n");
	}
	
	free(arr); //동적할당을 해제함.

	system("pause");
	return 0;
}