#include <stdio.h>
#include <math.h>

void hanoi(int T)
{
	
}

int main()
{
	int T, count;
	scanf("%d", &T);
	count = pow(2, T) - 1;
	printf("%d", count);
	hanoi(T, 1, 3, 2);
}
