#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input;
	scanf("%d", &input);

	//Âü°í : https://beomjun0638.tistory.com/46 
	switch (input)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("31");
			break;
		
		case 4: case 6: case 9: case 11:
			printf("30");
			break;

		case 2:
			printf("28");
			break;
	}
	printf("\n");
	system("pause");
	return 0;
}
