#include <stdio.h>

int main() {
	int c;
	while ((c = getchar()) != EOF)
	{
		// If c = getchar() != EOF is used, value '1' is assigned to c
		// We need parentheses around (c = getchar()) like thus, so that it is the value of c which is compared to EOF
		/*if (c == 1){
			putchar('Y');
		}*/
		putchar(c);
	}
	putchar(c); // EOF here
	return 0;
}
