#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 4

int value(char hexdigit)
{
	if (isdigit(hexdigit)) return hexdigit - '0';

	else if (islower(hexdigit)) return value(toupper(hexdigit));

	else if (isupper(hexdigit)) return (hexdigit - 'A') + 10;

	else return -1;
}


int htoi(char * hex)
{
	int n = strlen(hex);

	if (n == 4 && hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X')) 
	{
		return 16 * value(hex[2]) + value(hex[3]);
	}
	else if (n == 3 && hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X'))
	{
		return value(hex[2]);
	}
	else if (n == 2)
	{
		return 16 * value(hex[0]) + value(hex[1]);
	}
	else if (n == 1)
	{
		return value(hex[0]);
	}
	else
	{
		return -1;
	}
}




int main()
{
	char hex[LENGTH + 1];


	scanf("%s", hex);

	printf("%d\n", htoi(hex));

	return 0;
}

	
/* For posterity: Could have been scanned from the LHS!*/
