#include <stdio.h>
#include <stdlib.h>

//참고 : https://starrykss.tistory.com/424

int main(void) {
	int *arr; //배열 이름을 포인터 변수로
	int n;    // 배열의 크기를 받을 변수
	int sum = 0;
	float avg = 0.0;

	scanf("%d", &n);

	arr = (int *)malloc(sizeof(int) *n);//int 형 배열을 n개의 크기로 만듦
	for (int i = 0;i < n; i++) scanf("%d", &arr[i]); //n개의 수를 배열에 저장

	for (int i = 0;i < n;i++) sum = sum + arr[i];//전체 과목의 점수 합산

	avg = sum / (n * 1.0); //평균점수 계산
	printf("%5.2f\n", avg); //평균점수 출력
	
	free(arr); //동적할당을 해제함.

	system("pause");
	return 0;
}