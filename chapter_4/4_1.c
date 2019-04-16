#include <stdio.h>
#include <string.h>
#define MAX 100


int strindex(char s[], char t[])
{
	int index = -1;
	int i, j, k;
	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = i, k = 0; s[j] == t[k] && t[k] != '\0'; ++j, ++k)
		{
			;
		}

		if (k > 0 && t[k] == '\0')
		{
			index = i;
		}
	}
	return index;
}

int strindex_improved(char s[], char t[]) {
	int length = strlen(s);
	int i, j, k;
	for (i = length - 1; i > -1; --i) {
		for (j = i, k = 0; t[k] != '\0' && s[j + k] == t[k]; ++k) {
		       ;
		}	       
		if (t[k] == '\0') {
			return j;
		}
	}
	return -1;
}

int main()
{
	char string1[] = "wrong this feels wrong";
	char pattern[] = "wrong";

	int i = strindex_improved(string1, pattern);/*strindex(string1, pattern);*/

	printf("%d: %s\n", i, &string1[i]); 

	return 0;
}







