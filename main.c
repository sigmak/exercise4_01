#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = -1, b = 1;

	do 
	{
		scanf("%d", &a);
		if (a > 0) b = b*a;
	} while (a!=0);
	printf("%d\n", b);

	system("pause");
	return 0;
}