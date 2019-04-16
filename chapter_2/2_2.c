#include <stdio.h>

#define MAX 100


int main()
{
	char array[MAX + 1];
	int c;
	int i;

	for (i = 0; (i < MAX - 1) * ((c = getchar()) != '\n') * (c != EOF); ++i)
	{
		array[i] = c;
	}
	array[i] = '\0';

	printf("%s", array);
	return 0;
}

