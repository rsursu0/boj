#include <stdio.h>
#include <string.h>
char arr[1000001];

int main()
{
	int i = 0;
	int high = 0;
	char alph;
	int check[26] = {0};
	scanf("%s", arr);
	int size = strlen(arr);
	for (int k = 0; k < size; k++)
	{
		for (int i = 0; i< 26; i++)
		{
			if (arr[k] == 'A' + i || arr[k] == 'a' + i)
				check[i]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (check[i] > high)
		{
			high = check[i];
			alph = 'A' + i;
		}
		else if (high != 0 && high == check[i])
			alph = '?';
	}
	printf("%c", alph);
	return (0);
}
