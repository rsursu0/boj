#include <stdio.h>

int min(int a, int b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}

int main()
{
	int x, y, k, h;
	int counta, countb;
	char arr[50][51];
	int result = 2500
	scanf("%d %d", &x, &y);
	for (int i = 0; i < x; i++)
			scanf("%s", arr[i]);
	for (int i = 0; i < x - 7; i++)
	{
		for (int j = 0; j < y - 7; j++)
		{
			counta = 0; countb = 0;
			for (h = i; h < i + 8; h++)
			{
				for (k = j; k < j + 8; k++)
				{
					if ((h + k) % 2 == 0)
					{
						if (arr[h][k] == 'W')
							counta++;
						else
							countb++;
					}
					else
					{
						if (arr[h][k] == 'B')
								counta++;
						else
								countb++;
					}
				}
			}
		}
		result = min(result, counta);
		result = min(result, countb);
	}
	printf("%d", result);
}
