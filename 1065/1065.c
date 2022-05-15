#include <stdio.h>

int main()
{
	int nb,a1,a2,a3;
	int count = 0;
	int i = 1;
	scanf("%d", &nb);
	if (nb > 1000)
		return (0);
	while (i <= nb)
	{
		if (i < 100)
			count++;
		else if (i >= 100)
		{
			a1 = i / 100;
			a2 = (i / 10) % 10;
			a3 = i % 10;
			if ((a1 - a2 == a2 - a3) || (a2 - a1 == a3 - a2))
				count++;
		}
		i++;
	}
	printf("%d", count);
	return (0);
}
