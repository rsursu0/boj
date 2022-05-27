#include <stdio.h>

int main()
{
	int N;
	int tmp = 0;
	int temp = 0;
	scanf("%d", &N);
	if (N % 5 == 0)
	{
			printf("%d", N / 5);
			return (0);
	}
	else if (N % 3 == 0)
	{
			tmp = N / 3;
	}
	for (int i = N / 5; i > 0; i--)
	{
			if ((N - (5 * i)) % 3 == 0)
			{
					temp = ((N - (5 * i)) / 3) + i;
					break;
			}
	}
	if (tmp == 0 && temp == 0)
			printf("-1");
	else if (temp == 0)
			printf("%d", tmp);
	else
			printf("%d", temp);
	return (0);
}
