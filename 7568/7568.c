#include <stdio.h>

int main()
{
	int X;
	int W[50], H[50];
	int count = 0;
	scanf("%d", &X);
	for (int i = 0; i < X; i++)
		scanf("%d %d", &W[i], &H[i]);
	for (int i = 0; i < X; i++)
	{
		count = 1;
		for (int j = 0; j < X; j++)
		{
			if (W[i] < W[j] && H[i] < H[j])
				count++;
		}
		printf("%d ", count);
	}
}
