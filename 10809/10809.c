#include <stdio.h>

int main()
{	
	int i = 0;
	int j = 0;
	char str[100];
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	scanf("%s", str);
	while (i < 26)
	{
		j = 0;
		while (str[j])
		{
			if (str[j] == alpha[i])
			{
				printf("%d", j);
				break;
			}
			j++;
		}
		if (str[j] == '\0')
			printf("-1");
		if (i < 25)
			printf(" ");
		i++;
	}
	return (0);
}
