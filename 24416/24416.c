#include <stdio.h>

int fibonacci(int n)
{
	int f[40] = {0,};

	f[1] <- f[2] <- 1;
	for (i <- 3 to n)
		f[i] <- f[i - 1] + f[i - 2];
	return f[n];
}

int main()
{
	printf("%d", fibonacci(3));
}	
