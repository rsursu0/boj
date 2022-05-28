#include <stdio.h>

int is_prime(int a, int b)
{
		int i = 2; 
		while (i < a)
		{
				if (a % i == 0 || b % i == 0)
						return (1);
				i++;
		}
		i = a;
		while (i < b)
		{
				if (b % i == 0)
						return (1);
				i++;
		}
		return (0);
}

int main()
{
	int T;
	scanf("%d", &T);
	int i, A;
	for (int i = 0; i < T; i++)
	{
			scanf("%d", &A);
			int pri1 = A / 2;
			int pri2 = A / 2;
			while (is_prime(pri1, pri2) != 0)
			{
					pri1--;
					pri2++;
			}
				printf("%d %d\n", pri1, pri2);
	}
	return (0);
}
