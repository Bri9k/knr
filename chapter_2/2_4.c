#include <stdio.h>

int isin(char * string, char c)
{
	int i = 0;
	while (string[i] != '\0')
	{
		if (c == string[i++])
		{
			return 1;
		}
	}
	
	return 0;
}

int squeeze(char * string1, char * string2)
{
	int i, j;
	for (i = j = 0;/* Really Cool*/ string1[i] != '\0'; ++i)
	{
		if (!isin(string2, string1[i]))
		{
			string1[j++] = string1[i];
		}
	}
	string1[j] = '\0';
	return 0;
}

int main()
{
	char word[] = "abcde123rt5";
	char number[] = "0123456789";
	squeeze(word, number);
	printf("%s\n", word);
	return 0;
}
			
				
	
