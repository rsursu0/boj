#include <stdio.h>

int main()
{
	int T;
	int H,W,N;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		if (H < 1 || H > 99 || W < 1 || W > 99)
				return (0);
		if (N > H * W)
				return (0);
		int F = N % H;
		int R = (N / H) + 1;
		if (F == 0)
		{
				F = H;
				R--;
		}
		if(R < 10)
			printf("%d0%d\n", F, R);
		else if (R >=10)
			printf("%d%d\n", F, R);
	}
	return (0);
}
