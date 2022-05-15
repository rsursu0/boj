#include <stdio.h>

int main()
{
	int i = 0;
	int size, result = 0;
	char nb[100];
	scanf("%d", &size);
	if (size < 1 || size > 100)
		return (0);
	scanf("%s", nb);
	while (i < size)
		result += nb[i++] - '0';
	printf("%d", result);
	return (0);
}
