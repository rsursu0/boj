#include <stdio.h>
#include <stdlib.h>

#define MAX 10000000

int arr[MAX];

int main()
{
	int N, nbr;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &nbr);
		arr[nbr]++;
	}
	for (int i = 0; i < MAX; i++)
	{
		while (arr[i] != 0)
		{
			printf("%d\n", i);
			arr[i]--;
		}
	}
}
