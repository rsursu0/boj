#include <stdio.h>

int main()
{
	int i = 0;
	char str[15];
	int result = 0;
	scanf("%s", str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'C')
			result += 3;
		else if (str[i] <= 'F')
			result += 4;
		else if (str[i] <= 'I')
			result += 5;
		else if (str[i] <= 'L')
			result += 6;
		else if (str[i] <= 'O')
			result += 7;
		else if (str[i] <= 'S')
			result += 8;
		else if (str[i] <= 'V')
			result += 9;
		else if (str[i] <= 'Z')
			result += 10;
		i++;
	}
	printf("%d", result);
	return (0);
}

