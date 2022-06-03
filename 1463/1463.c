#include <stdio.h>

int ck_min(int a, int b)
{
	return (a <= b ? a : b);
}

int main()
{
	int N;
	int count[1000001] = {0,};
	scanf("%d", &N);
	count[1] = 0;

	for (int i = 2; i <= N; i++)
	{
		count[i] = count[i - 1] +1;
		if (i % 2 == 0)
			count[i] = ck_min(count[i], count[i / 2] + 1);
		if (i % 3 == 0)
			count[i] = ck_min(count[i], count[i / 3] + 1);
	}
	printf("%d", count[N]);
	return (0);
}
