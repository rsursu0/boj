#include <stdio.h>

int main()
{
	int count = 0;
	int n, temp;
	int title = 665;
	scanf("%d", &n);
	while (count != n)
	{
		temp = ++title;
		while (temp != 0)
		{
			if (temp % 1000 == 666)
			{
				count++;
				break;
			}
			else
				temp /= 10;
		}
	}
	printf("%d\n", title);
}

