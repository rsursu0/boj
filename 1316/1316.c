#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ck_overlap();

int main()
{
	int N;
	char str[100];
	scanf("%d", &N);
	char arr = (char **)malloc(sizeof(char*) * (N+1));
	for (int i = 0; i < N; i++)
	{
		scanf("%s", arr[i]);

	for (int i = 0; i < N; i++)
		printf("%s\n", arr[i]);
	return (0);
}
