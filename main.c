/*
2�ܺ��� 9�ܱ��� ���� ������ ������ ǥ�� ����Ͻÿ�.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	for (j = 1; j <= 9; j++) {
		for (i = 2;i <= 9;i++) {
			printf("%2d x%2d=%3d\t", i, j, i*j);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}