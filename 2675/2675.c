#include <stdio.h>

int main()
{
	int T;
	int R;
	int i = 0;
	int temp = 0;
	char str[20];
	scanf("%d", &T);
	while (T != 0)
	{
		scanf("%d %s", &R, str);
		while (str[i])
		{
			temp = R;
			while (temp != 0)
			{
				printf("%c", str[i]);
				temp--;
			}
			i++;
		}
		printf("\n");
		i = 0;
		T--;
	}
	return (0);
}
