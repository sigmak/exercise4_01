#include <stdio.h>
#include <stdlib.h>
int add(int a, int b);
int mult(int a, int b);
int subt(int a, int b);

int main(void) {
	int(*pfunary[3])(int, int) = { 0, };
	pfunary[0] = add;
	pfunary[1] = mult;
	pfunary[2] = subt;
	char *ops = "*+-";
	char op;
	while (op = *ops++)
	{
		switch (op) {
		case '+': printf("%c 결과: %d\n", op, pfunary[0](3, 5));
			break;
		case '-': printf("%c 결과: %d\n", op, pfunary[2](3, 5));
			break;
		case '*': printf("%c 결과: %d\n", op, pfunary[1](3, 5));
			break;
		}
	}

	system("pause");
	return 0;
}
int add(int a, int b) {
	return a + b;
}
int mult(int a, int b) {
	return a * b;
}
int subt(int a, int b) {
	return a - b;
}