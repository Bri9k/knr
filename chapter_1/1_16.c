#include <stdio.h>
#define MAXLENGTH 10

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
			//printf("%c",c);
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
		printf("%s\t%d\n", str1, length);
		if (length > max_till_now)
		{
			max_till_now = length;
			copy(longest, str1);
		}
	}
	if (max_till_now > 0)
	{
		printf("%s\n%d\n",longest, max_till_now);
	}
	return 0;
}


// Specs: A string just consisting of a newline is considered to have length 1
