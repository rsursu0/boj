#include <stdio.h>
#include <stdlib.h>

typedef struct guest{
	int age;
	char *name;
	int nbr;
} gst;

int compare(const void *a, const void *b)
{
	gst A = *(gst *)a;
	gst B = *(gst *)b;
	if (A.age > B.age)
		return (1);
	else if (A.age < B.age)
		return (-1);
	else
	{
		if (A.nbr >= B.nbr)
			return (1);
		else if (A.nbr < B.nbr)
			return (-1);
	}
}

int main()
{
	int N;
	gst client[100000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		client[i].name = (char *)malloc(sizeof(char)*100);
		scanf("%d %s", &client[i].age, client[i].name);
		client[i].nbr = i;
	}
	qsort(client, N, sizeof(gst), compare);
	for (int i = 0; i < N; i++)
		printf("%d %s\n", client[i].age, client[i].name);
}

