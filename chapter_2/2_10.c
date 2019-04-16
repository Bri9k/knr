#include <stdio.h>

int lower(int c)
{
	return (c >= 'A' && c <= 'Z') ? (c + ('a' - 'A')) : c;
}


int main()
{
	char ic = 'Z';

	printf("%c\n", lower(ic));

	return 0;
}

