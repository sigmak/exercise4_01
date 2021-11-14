#include <stdio.h>
#include <stdlib.h>
//참고1 : https://dojang.io/mod/page/view.php?id=320
//참고2 : https://banzi.tistory.com/entry/프로그램-명-두-정방행렬-입력받아-곱-구하는-프로그램23정방행렬
int main(void) {
	int **arr_A, **arr_B, **arr_C;
	int n;
	scanf("%d", &n);
	arr_A = (int **)calloc(n+1, sizeof(int));
	for (int i = 0;i < n; i++)
		arr_A[i] = (int *)calloc(n, sizeof(int));
	arr_B = (int **)calloc(n+1, sizeof(int));
	for (int i = 0;i < n; i++)
		arr_B[i] = (int *)calloc(n, sizeof(int));

	arr_C = (int **)calloc(n+1, sizeof(int));
	for (int i = 0;i < n; i++)
		arr_C[i] = (int *)calloc(n, sizeof(int));

	for (int i = 0; i < n; i++)    // 세로 크기만큼 반복
		for (int j = 0; j < n; j++)    // 가로 크기만큼 반복
			scanf("%d", &arr_A[i][j]);

	for (int i = 0; i < n; i++)    // 세로 크기만큼 반복
		for (int j = 0; j < n; j++)    // 가로 크기만큼 반복
			scanf("%d", &arr_B[i][j]);

	// 두행렬 곱셈 계산 & 저장
	int i, j, k;
	for (i = 0;i < n;i++)
		for (j = 0;j < n;j++)
			for (k = 0;k < n; k++)
				arr_C[i][j] += arr_A[i][k] * arr_B[k][j];

	printf("\n");
	for (int i = 0; i < n; i++)    // 세로 크기만큼 반복
		for (int j = 0; j < n; j++)    // 가로 크기만큼 반복
			printf("%d ", arr_C[i][j]);
		printf("\n");

/*
	for (int i = 0; i < n; i++)    // 세로 크기만큼 반복
		for (int j = 0; j < n; j++)    // 가로 크기만큼 반복
			printf("%d ", arr_A[i][j]);
		printf("\n");

	for (int i = 0; i < n; i++)    // 세로 크기만큼 반복
		for (int j = 0; j < n; j++)    // 가로 크기만큼 반복
			printf("%d ", arr_B[i][j]);
		printf("\n");
*/

	for (int i = 0; i < n; i++)    // 세로 크기만큼 반복
	{
		free(arr_A[i]);                  // 2차원 배열의 가로 공간 메모리 해제
		free(arr_B[i]);
		free(arr_C[i]);
	}

	free(arr_A);    // 2차원 배열의 세로 공간 메모리 해제
	free(arr_B);    // 2차원 배열의 세로 공간 메모리 해제
	free(arr_C);    // 2차원 배열의 세로 공간 메모리 해제

	system("pause");
	return 0;
}