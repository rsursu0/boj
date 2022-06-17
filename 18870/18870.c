#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return (*(int*)a - *(int *)b);
}

int unique(int *arr, int size)
{
	int i, j = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[j] == arr[i])
			continue;
		arr[++j] = arr[i];
	}
	return (++j);                                
}

int bi_search(int *arr, int N, int num)
{
	int start = 0;
	int end = N - 1;
	int mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (arr[mid] < num)
			start = mid + 1;
		else if (arr[mid] > num)
			end = mid - 1;
		else
			return mid;
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	int arr[N];
	int count[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		count[i] = arr[i];
	}
	qsort(count, N, sizeof(int), compare);

	int ret = unique(count, N);
	for (int i = 0; i < N; i++)
	{
		int temp = bi_search(count, ret, arr[i]);
		printf("%d ", temp);
	}
}
