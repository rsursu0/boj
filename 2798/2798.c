#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int main()
{
	int N, M;
	int result = 0;
	int arr[100];
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	qsort(arr, N, sizeof(int), compare);

	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			for (int k = j+1; k < N; k++)
			{
				int ob = arr[i] + arr[j] + arr[k];
				if (ob <= M)
				{
					if (ob == M)
					{
						printf("%d", M);
						return (0);
					}
					else if (ob > result)
					{
						result = ob;
						continue ;
					}
				}
			}
		}
	}
	printf("%d", result);
}

