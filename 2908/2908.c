#include <stdio.h>
#include <stdlib.h>

int main()
{
	char temp;
	char s1[4], s2[4];
	scanf("%s %s", s1, s2);
	temp = s1[0];
	s1[0] = s1[2];
	s1[2] = temp;
	temp = s2[0];
	s2[0] = s2[2];
	s2[2] = temp;
//	printf("%d\n", (atoi(s1) - atoi(s2)));
	if (atoi(s1) - atoi(s2) > 0)
		printf("%s", s1);
	else if (atoi(s1) - atoi(s2) < 0)
		printf("%s", s2);
	return (0);
}
