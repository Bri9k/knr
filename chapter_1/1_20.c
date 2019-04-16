#include <stdio.h>

int main()
{
	int n = 4;
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			for (int i = 0; i < n; i++)
			{
				putchar(' ');
			}
		}
		else
		{
			putchar(c);
		}
	}
}


// Used variable, as number of blanks can be passed to function as command line arguements or as a parameter with little manipulation
