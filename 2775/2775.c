#include <stdio.h>

int main()
{
		int arr[15][15] = {0,};
		int T,F,R;
		for (int i = 1; i < 15; i++)
				arr[0][i] = i;
		for (int i = 1; i < 15; i++)
		{
				for (int j= 1; j < 15; j++)
						arr[i][j] = arr[i-1][j] + arr[i][j-1];
		}
		scanf("%d", &T);
		for (int i = 0; i < T; i++)
		{
				scanf("%d %d", &F, &R);
				printf("%d\n", arr[F][R]);
		}
		return (0);
}		
