#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapnbr(char arr[], int a)
{
	char max = '0';
	int M = a;
	for (int i = 0; i < a/2; i++)
	{
		M--;
		max = arr[i];
		arr[i] = arr[M];
		arr[M] = max;
	}
}

int main()
{
	int a = 0;
	int result = 0;
	int up = 0;
	int i = 0;
	char arr1[10002] = {0,};
	char arr2[10002] = {0,};
	char ret[10003] = {0,};
	scanf("%s %s", arr1, arr2);
	swapnbr(arr1, strlen(arr1));
	swapnbr(arr2, strlen(arr2));

	a = strlen(arr1) > strlen(arr2) ? strlen(arr1) : strlen(arr2);


	for (i = 0; i < a; i++)
	{
		result = ((arr1[i] - 48) + (arr2[i] - 48)) + up;
		if (result < 0)
		{
			if (arr1[i] - 48 < 0)
				result = arr2[i] - 48 + up;
			else
				result = arr1[i] - 48 + up;
		}
		if (result >= 10)
			up = 1;
		else
			up = 0;
		ret[i] = result % 10 + '0';
	}
	if (up == 1)
		ret[i] = '1';
	swapnbr(ret, strlen(ret));
	printf("%s", ret);
}
