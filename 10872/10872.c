#include <stdio.h>

unsigned int factorial(unsigned int N)
{
	if (N <= 1)
		return (1);
	else
		return (N * factorial(N - 1));
}

int main()
{
	unsigned int N;
	scanf("%d", &N);
	printf("%d", factorial(N));
	return (0);
}
