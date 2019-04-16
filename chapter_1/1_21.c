#include <stdio.h>

int main()
{
	int n = 4;
	int c;
	int i = 0;
	int tabs, blanks;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t' || c == ' ')
		{
			i = 0;
			while(c == '\t' || c == ' ')
			{
				if (c == ' ')
				{
					++i;
				}
				else if (c == '\t')
				{
					i += n;
				}

				// c still contains a character which is not \t or \b
				// spit it out
					
				c = getchar();
			}
			tabs = i / n;
			blanks = i % n;
			for (int j = 0; j < tabs; j++)
			{
				putchar('\t');
			}
			for (int j = 0; j < blanks; j++)
			{
				putchar(' ');
			}
			putchar(c);
		}
		else
		{
			putchar(c);
		}
	}

	return 0;
}
			


