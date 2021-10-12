#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x,y;
	scanf("%f %f", &x, &y);
	if (x > 0.0 && y > 0.0) {
		printf("%.6f", x + y);
	} else if (x > 0.0 && y <= 0.0) {
		printf("%.6f", x - y);
	} else if (x <= 0.0 && y > 0.0) {
		printf("%.6f", -x + y);
	} else if (x <= 0.0 && y <= 0.0) {
		printf("%.6f", -x - y);
	}
	printf("\n");
	system("pause");
	return 0;
}
