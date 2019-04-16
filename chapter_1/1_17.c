#include <stdio.h>
#define MAXLENGTH 100

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
		if (length > 10)
		{
			printf("%s\n", str1);
		}
	}
	return 0;
}


// Specs: A string just consisting of a newline is considered to have length 1
// while(str1[i] = str2[i]) copies str1 <- str2 because when str2[i] becomes \0, the value of the expression returned to the while loop is 0
