#define CRTSECURENOWARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void sort(int* arr, int a)
{
	int i, j, temp, ban = a % 2 + 1;
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (arr[i] < arr[j] && ban == 1 || arr[i] > arr[j] && ban == 2)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(void)
{
	int arr[4][20];
	int i, j;
	int max, min, sum = 0, a_max = 0, a_min = MAX, a_sum = 0;
	FILE * f = NULL;

	f = fopen("score.txt", "w");
	srand((unsigned)time(NULL));
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 20; j++) {
			arr[i][j] = rand() % MAX + 1;
		}
	}

	for (i = 0; i < 4; i++) {
		sort(&arr[i][0], i);
		max = min = arr[i][0];
		sum = 0;
		printf("[%d반]\n", i + 1);
		fprintf(f, "[%d반]\n", i + 1);
		for (j = 0; j < 20; j++) {
			if (arr[i][j] > max) max = arr[i][j];
			if (arr[i][j] < min) min = arr[i][j];
			if (arr[i][j] > a_max) a_max = arr[i][j];
			if (arr[i][j] < a_min) a_min = arr[i][j];
			sum += arr[i][j];
			a_sum += arr[i][j];
			printf("%d ", arr[i][j]);
			fprintf(f, "%d ", arr[i][j]);
		}
		printf("\n평균: %.2f, 최고점: %d, 최저점: %d\n\n", (float)sum / 20, max, min);
		fprintf(f, "\n평균: %.2f, 최고점: %d, 최저점: %d\n\n", (float)sum / 20, max, min);
	}
	printf("------------------------------------------------------------\n");
	fprintf(f, "------------------------------------------------------------\n");
	printf("전체 평균: %.2f, 최고점: %d, 최저점: %d\n", (float)a_sum / 80, a_max, a_min);
	fprintf(f, "전체 평균: %.2f, 최고점: %d, 최저점: %d\n", (float)a_sum / 80, a_max, a_min);
	fclose(f);

	system("pause");
	return 0;
}