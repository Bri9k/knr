#include <stdio.h>
#define MAXLENGTH 100

int my_getline(char string[], int max)
{
	int i;
	int c = getchar();
	for (i = 0; i < max - 1 && c != EOF && c != '\n'; i++)
	{
		string[i] = c;	
		c = getchar();
	}
	if (c == '\n')
	{
		string[i] = '\n';
		++i;
	}
	string[i] = '\0';

	return i;
}

int foldline(char linein[], int line_length)
{
	int i = 0, j = 0;
	int rightblank;
	int prev_end = 0;
	while(linein[i] != '\n')
	{
		for (i = prev_end; (i < prev_end + line_length) && (linein[i] != '\n'); ++i)
		{
			;
		}
		// i now points to prev_end + linelength or \n or \0

		if (i == prev_end + line_length)
		{
			/*for (j = prev_end; j < i; j++)
			{
				putchar(linein[j]);
			}
			putchar('\n');*/
			
			for (; (i > prev_end) && (linein[i] != ' '); --i);

			if (i == prev_end)
			{
				for (j = i; j < prev_end + line_length; ++j)
				{
					putchar(linein[j]);
				}
				putchar('\n');

				prev_end = prev_end + line_length;
			}

			else
			{
				rightblank = i + 1;
				for (; linein[i] != ' '; --i);
				++i;
				for (j = prev_end; j < i; ++j)
				{
					putchar(linein[j]);
				}
				putchar('\n');
				prev_end = rightblank;
			}

			
		}
		else if (linein[i] == '\n')
		{
			for (j = prev_end; j <= i; j++)
			{
				putchar(linein[j]);
			}
			// and now his line has ended
		}
	}
}






int main()
{
	char line[MAXLENGTH];

	int n = 50;
	int length;

	while ((length = my_getline(line,MAXLENGTH)) != 0)
	{
		// printf("\n%d\n", length);
		// printf("%s",line);
		foldline(line, n);
	}
	return 0;
}


