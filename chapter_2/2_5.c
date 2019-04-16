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

int any(char * string1, char * string2)
{
	int i, j;
	for (i = 0;/* Really Cool*/ string1[i] != '\0'; ++i)
	{
		if (isin(string2, string1[i]))
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	char word[] = "abcde123rt5";
	char number[] = "0123456789";
	printf("%d\n",any(word, number));
	return 0;
}
			
				
	
