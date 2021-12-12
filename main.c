#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, start, end;
	int isPrime;
	start = 1;
	end = 100;

	//√‚√≥ : https://codeforwin.org/2015/06/c-program-to-print-all-prime-numbers-between-1-to-n.html
	// Make sure that lowerlimit does not go below 2
	// Since 2 is first prime number
	if (start < 2)
		start = 2;

	/* Find all Prime numbers between 1 to n */
	for (i = start; i <= end; i++)
	{
		/* Assume that the current number is Prime */
		isPrime = 1;

		/* Check if the current number i is prime or not */
		for (j = 2; j <= i / 2; j++)
		{
			/*
			* If i is divisible by any number other than 1 and self
			* then it is not prime number
			*/
			if (i%j == 0)
			{
				isPrime = 0;
				break;
			}
		}

		/* If the number is prime then print */
		if (isPrime == 1)
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	system("pause");
	return 0;
}