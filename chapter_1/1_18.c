#include <stdio.h>
#define MAXLENGTH 100

// pass length of line, not length of string
int removeblanks(char str1[], int length)
{
	// store last character, either \n or EOF
	char c = str1[length - 1];
	
	// start from the first character before the \n
	int i = length - 2;

	while (str1[i] == ' ' || str1[i] == '\t')
	{
		--i;
	}
	
	str1[i + 1] = c;
	str1[i + 2] = '\0';
}

int getline_new(char line[], int maxlen)
{
	int i = 0;
	int c;
	while ( i < maxlen - 1 && ((c = getchar()) != EOF) && c != '\n')
	{
		line[i++] = c;
	}
	if (c == '\n')
	{
		line[i++] = '\n';
	}
	line[i] = '\0';
	if (i == maxlen - 1)
	{
		while (((c = getchar()) != EOF) && c != '\n')
		{
			++i;
		}
		if (c == '\n')
		{
			++i;
		}
	}
	return i;
}

int copy (char str1[], char str2[])
{
	int i = 0;
	while (str1[i] = str2[i])
	{
		++i;
	}
	return 0;
}

int main()
{
	char str1[MAXLENGTH];
	char longest[MAXLENGTH];
	int length;
	int max_till_now = 0;
	while ((length = getline_new(str1, MAXLENGTH)) != 0)
	{
		removeblanks(str1, length);	
		printf("%s",str1);
	}
	return 0;
}


// Specs: A string just consisting of a newline is considered to have length 1
// NOTE: When using custom defined functions, be careful not to assume their output to be the same as standard library functions
// Does strlen include '\0' : No. "abc\n" has length '4'
