#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct string{
	int size;
	char arr[50];
} str;

int compare(const void *a, const void *b)
{
	str A = *(str *)a;
	str B = *(str *)b;
	if (A.size > B.size)
		return (1);
	else if (A.size < B.size)
		return (-1);
	else
		return (strcmp(A.arr, B.arr) > 0);
}

int main()
{
	int N;
	str arr[20000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", arr[i].arr);
		arr[i].size = strlen(arr[i].arr);
	}
	qsort(arr, N, sizeof(str), compare);
	printf("%s\n", arr[0].arr);
	for (int i = 1; i < N; i++)
	{
		if (strcmp(arr[i - 1].arr, arr[i].arr) == 0)
			continue ;
		else
			printf("%s\n", arr[i].arr);
	}
}
