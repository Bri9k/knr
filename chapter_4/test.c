#include <stdio.h>
#include <ctype.h>

extern int i;

int fortytwo = 42;

int f(void);

int main()
{
	extern int fortytwo;
	{
		extern int fortytwo;
		printf("%d\n", fortytwo);
	}
	printf("%d\n", fortytwo);
	f();
	return 0;
}
