#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int N;
	int result = 0;
	scanf("%d", &N);
	char arr[100][100];
	char ck[100][100];
	for (int i = 0; i < N; i++)
		scanf("%s", &arr[i]);
	for (int i = 0; i < N; i++)
	{
		int count = 0;
		int len1;
		int len2;
		len1 = strlen(arr[i]);
		for (int j = 0; j < len1; j++)
		{
			if (arr[i][j] != arr[i][j+1])
				ck[i][strlen(ck[i])] = arr[i][j];
		}
		len2 = strlen(ck[i]);
		for (int j = 0; j < len2; j++)
		{
			for (int k = 0; k < len2; k++)
			{
				if (ck[i][j] == ck[i][k])
					count++;
			}
		}
		if (len2 == count)
			result++;
		if (count != 0)
			count = 0;
	}			
	printf("%d", result);		
	return (0);
}
