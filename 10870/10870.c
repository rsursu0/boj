#include <stdio.h>

int fibo(int N)
{
	if (N <= 1)
		return (N);
	else
		return (fibo(N - 1) + fibo(N - 2));
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", fibo(N));
	return (0);
}
