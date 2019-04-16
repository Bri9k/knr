#define BUFSIZE 100
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0;
/* getch: the function which actually gets chars! */
int getch(void) /* get a (possibly pushed-back) character */
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /* push character back in input */
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}

int getint(int *pn) {
	int c, sign;
	while (isspace(c = getch()))
		;

	if (!isdigit(c) && c != EOF && c != '-' && c != '+') {
		/* assert: not a number*/
		ungetch(c);
		return 0;
	}
	
	sign = (c == '-') ? -1 : 1;

	if (c == '+' || c == '-') {
		/*c = getch();*/
		if (!isdigit(c = getch())) {
			ungetch(c);
			return 0;
		}
	}
	/* assert: c contains a digit */

	for (*pn = 0; isdigit(c); c = getch()) {
		*pn = 10 * *pn + (c - '0');
	}

	*pn *= sign;

	if (c != EOF) {
		ungetch(c);
	}

	return c;
}


int main() {
	int n, array[BUFSIZE], state;
	for (n = 0; n < BUFSIZE && (state = getint(&array[n])) != EOF;) {
		if (state) {
			printf("%d\n", array[n]);
			++n;
		}
	}
	return 0;
}


