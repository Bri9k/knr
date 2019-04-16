#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c;
	int inyet = 0;
	int state = OUT;
	while ((c = getchar()) != EOF)
	{
		if (!(c == ' ' || c == '\t' || c == '\n'))
		{
			if (inyet && state == OUT)
			{
				putchar('\n');
			}
			state = IN;
			inyet = 1;
			// pretty output
			putchar(c);
		}
		else
		{
			state = OUT;
		}
		// feature not in specs, used to make output look nice
		//putchar(c);
	}
	return 0;
}

		




