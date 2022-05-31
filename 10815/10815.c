#include <stdio.h>

int main()
{
	int M, N, temp;
	int arrN[500001] = {0,};
	int arrM[500001] = {0,};
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arrN[i]);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (arrN[j] > arrN[j + 1])
			{
				temp = arrN[j];
				arrN[j] = arrN[j + 1];
				arrN[j + 1] = temp;
			}
		}
	}
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
		scanf("%d", &arrM[i]);
	for (int i = 0; i < M; i++)
	{
		if (arrM[i] > arrN[N/2])
		{

	}
}
