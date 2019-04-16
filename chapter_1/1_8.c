#include <stdio.h>

int main()
{
	int c;
	int blank = 0;
	int tab = 0;
	int newline = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			++blank;
		}
		else if (c == '\t')
		{
			++tab;
		}
		else if (c == '\n')
		{
			++newline;
		}
	}
	// putchar(int) apparently goes very wrong.
	// obviously. putchar(int) prints the ASCII (or whatever system you are using) equivalent of the int
	// Why ?
	printf("%d\t%d\t%d\n",blank,tab,newline);
	return 0;
}



