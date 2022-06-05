#include <stdio.h>

int plus(int a)
{
	int i = 0;
	while (i < a)
	{
		int j = i;
		int result = i;
		while (j > 0)
		{
			result = result + (j % 10);
			j = j / 10;
		}
		if (result == a)
			return (i);
		i++;
	}
	return (0);
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", plus(N));
}
