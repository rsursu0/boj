#include <stdio.h>

int main()
{
	int A = 1;
	int B = 1;
	int i = 1;
	int X;
	int flag = 0;
	scanf("%d", &X);

	if (X == 1)
	{
		printf("1 / 1");
		return (0);
	}
	while (i < X)
	{
		if (flag == 0)
		{
			if (A == 1)
			{
				B += 1;
				flag = 1;
			}
			else
			{
				A--;
				B++;
			}
		}
		else if (flag == 1)
		{
			if (B == 1)
			{
				A += 1;
				flag = 0;
			}
			else
			{
				B--;
				A++;
			}
		}
		i++;
	}
	printf("%d/%d", A, B);
	return (0);
}
