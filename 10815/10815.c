#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
		return (*(int*)a - *(int*)b);
}

int bi_search(int *arr, int N, int num)
{
	int start = 0;
	int end = N;
	int mid = (start + end) / 2;
	while (start <= end)
	{
		if (arr[mid] == num)
			return (1);
		else if (arr[mid] < num)
			start = mid + 1;
		else
			end = mid - 1;
		mid = (start + end) / 2;
	}
	return (0);
}

int main()
{
	int M, N, temp;
	int arrN[500000] = {0,};
	int arrM[500000] = {0,};
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arrN[i]);
	qsort(arrN, N, sizeof(int), compare);
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
		scanf("%d", &arrM[i]);
	for (int i = 0; i < M; i++)
	{
		if (bi_search(arrN, N, arrM[i]))
			printf("1 ");
		else
			printf("0 ");
	}
}
