#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b)
{
	char *str1 = (char *)a;
	char *str2 = (char *)b;
	return (strcmp(str1, str2));
}

struct org{
	char name[21];
};

struct dest{
	char same[21];
};

struct org org[1000001];
struct dest dest[500001];

int main()
{
	int N, M, j = 0;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N + M; i++)
		scanf("%s", org[i].name);

	qsort(org, N + M, sizeof(org[0]), compare);
	for (int i = 0; i < N+M; i++)
	{
		if (strcmp(org[i].name, org[i+1].name) == 0)
		{
			strcpy(dest[j].same, org[i].name);
			i++;
			j++;
		}
	}
	printf("%d\n", j);
	for (int i = 0; i < j; i++)
		printf("%s\n", dest[i].same);
}
