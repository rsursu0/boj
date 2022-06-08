#include <stdio.h>
#include <stdlib.h>

int arr[1000000000];

int compare(const void* a, const void *b)
{
	if (*(int *)a > *(int *)b)
		return -1;
	else if  (*(int *)a < *(int *)b)
		return 1;
	else
		return 0;
}

int main()
{
	int N;
	int i = 0;
	scanf("%d", &N);
	while (N != 0)
	{
		if (N >= 10)
		{
			arr[i] = N % 10;
			N = N / 10;
			i++;
		}
		else
		{
			arr[i] = N;
			break;
		}
	}
	qsort(arr, i+1, sizeof(int), compare);
	for (int j = 0; j <= i; j++)
		printf("%d", arr[j]);
}
