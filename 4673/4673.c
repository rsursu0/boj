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
			return (0);
		i++;
	}
	return (1);
}

void self_nbr()
{
	int a = 1;
	while (a <= 10000)
	{
		if (plus(a) == 1)
			printf("%d\n", a);
		a++;
	}
}

int main()
{
	self_nbr();
	return (0);
}
