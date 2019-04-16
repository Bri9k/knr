#include <stdio.h>


/* this one for c_completeness /* /*  */

int main()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b')
		{
			putchar('\\');
			putchar('b');
		}
		else if ( c == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else if (c == ' ')
		{
			putchar('\\');
			putchar('b');
		}
		else
		{
			putchar(c);
		}
	}
	/
	return 0;
}

// how do you detect the
// putchar('\'); does not work. (ignores the ')' ??). use putchar('\\'); instead 
// vim cannot search |\/ naturally
