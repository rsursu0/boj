#include <stdio.h>

int main()
{
	int A,B,C;
	scanf("%d %d %d", &A, &B, &C);
	if (C <= B)
	{
		printf("-1");
		return (0);
	}
	else
		printf("%d", A/(C-B)+1);
	return (0);
}
