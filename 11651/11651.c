#include <stdio.h>
#include <stdlib.h>

typedef struct xy{
	int x;
	int y;
} xyxy;

int compare(const void *a, const void *b)
{
	xyxy A = *(xyxy *)a;
	xyxy B = *(xyxy *)b;
	if (A.y > B.y)
		return (1);
	else if (A.y < B.y)
		return (-1);
	else
	{
		if (A.x > B.x)
			return (1);
		else if (A.x < B.x)
			return (-1);
	}
}

int main()
{
	xyxy arr[100000];
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d %d", &arr[i].x, &arr[i].y);
	qsort(arr, N, sizeof(xyxy), compare);
	for (int i = 0; i < N; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);
}
