#include <stdio.h>

int main()
{
	int N;
	int arr[1000];
	int temp;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < N-1; i++)
	{
		for (int j = 0; j < N-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);
	return (0);
}
