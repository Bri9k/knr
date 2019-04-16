#include <stdio.h>

enum boolean {
	FALSE = 0,
	TRUE = 1
};

int main()
{
	if (TRUE)
	{
		printf("TRUE\n");
	}
	if(!FALSE)
	{
		printf("!FALSE\n");
	}
}
	
