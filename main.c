#include <stdio.h>
#include <stdlib.h>
#define SWAP_INT(a, b, temp) \
	temp = a; \
	a = b; \
	b=temp;

#define SWAP_DOUBLE(a, b) \
	double _temp = a; \
	a = b; \
	b = _temp;

#define SWAP_TYPE(type, a, b) \
	{\
		type _swap_temp; \
		_swap_temp = (b); \
		(b) = (a); \
		(a) = _swap_temp;\
	}
int main(void)
{
	int a = 30, b = 20, c;
	printf("%d %d\n", a, b);
	SWAP_INT(a, b, c);
	printf("%d %d\n", a, b);
	SWAP_TYPE(int, a, b);
	printf("%d %d\n", a, b);

	double x = 123.45, y = 43.87;
	printf("%.2f %.2f\n", x, y);
	SWAP_DOUBLE(x, y);
	printf("%.2f %.2f\n", x, y);
	SWAP_TYPE(double, x, y);
	printf("%.2f %.2f\n", x, y);

	system("pause");
	return 0;
}