#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int N, M;
	int i = 0;
	int count = 0;
	char *origin[10000];
	char *comp[10000];
	scanf("%d %d", &N, &M);
	while (i < N)
	{
		char *str = malloc(sizeof(char) * 500);
		scanf("%s", str);
		origin[i] = str;
		i++;
	}
	i = 0;
	while (i < M)
	{
		char *str = malloc(sizeof(char) * 500);
		scanf("%s", str);
		comp[i] = str;
		i++;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (strlen(origin[i]) == strlen(comp[j]))
			{
				if (strcmp(origin[i], comp[j]) == 0)
					count++;
			}
		}
	}
	printf("%d", count);
}
