#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // 배열의 크기 지정

//출처 : https://bigforest.miraheze.org/wiki/C_언어_예제/배열합_구하는_함수
int sum_array(int *array, int num)
{
	int i, sum = 0;
	for (i = 0; i < num; i++)
		sum += array[i];
	return (sum);
}

int main(void)
{
	int i, sum, arr[MAX] = {0, }; // 0,1,2,3,4

	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	sum = sum_array(arr, MAX);
	printf("%d\n", sum);

	system("pause");
	return 0;
}

