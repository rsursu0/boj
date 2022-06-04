#include <stdio.h>
#include <math.h>

int powpow(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * (powpow(x, y-1)));
}

void hanoi(int T, int start, int mid, int to)
{
	if (T == 1)
	{
		printf("%d %d\n", start, to);
		return ;
	}
	hanoi(T-1, start, to, mid);
	printf("%d %d\n", start, to);
	hanoi(T-1, mid, start, to);
}

int main()
{
	int T, count;
	scanf("%d", &T);
	count = powpow(2, T) - 1;
	printf("%d\n", count);
	hanoi(T, 1, 2, 3);
}
