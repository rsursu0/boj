#include <stdio.h>

int main()
{
	int N;
	int i = 0;
	int flag1 = 1;
	int flag2 = 2;
	scanf("%d", &N);
	while (1)
	{
		flag1 = flag1 + (6 * (i+1));
		flag2 = flag2 + (6 * i);
		if (N == 1)
		{
			printf("1");
			break;
		}
		else if (N >= flag2 && N <= flag1)
		{
			printf("%d", i + 2);
			break;
		}
		i++;
	}
	return (0);
}
