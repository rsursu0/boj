#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int ck_space(char c)
{
	if (c == 32)
		return (1);
	return (0);
}

int main()
{
	int i = 0;
	int count = 0;
	char word[100000];
	gets(word);
	int len = strlen(word);
	if (word[0] == ' ' && word[1] == '\0')
		return(0);
	
	while (i < len)
	{
		if (word[0] == ' ')
			i++;
		if (word[i] != '\0' && ck_space(word[i]) == 1)
			count++;
		i++;
	}
	printf("%d", count + 1);
	return (0);
}
