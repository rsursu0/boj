#include <stdio.h>

int main()
{
	int arr[500000];
	int N;
	int sum = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", arr[i]);
		sum += arr[i];
	}
	printf("%f\n", sum / N);
}
