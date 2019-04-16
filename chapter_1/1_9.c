#include <stdio.h>

int main()
{
	int c;
	int formerly_in_space = 0;
	int count = 0; // cannot find a better way to track whether it is the first iteration
	while ((c = getchar()) != EOF)
	{
		// if this is a space no question of printing anything
		if (c == ' ')
		{
			formerly_in_space = 1;
		}
		else
		{
			if (formerly_in_space)
			{
				putchar(' ');
				formerly_in_space = 0;
			}
			// not space, print
			putchar(c);
		}
	}
	// if ends with a space string
	if (formerly_in_space)
	{
		putchar(' ');
	}
	return 0;
}

// putchar(int_var) prints (char)int_var;
