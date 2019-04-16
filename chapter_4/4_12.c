#include <stdio.h>

void ritoa(int n, char s[]) {
	/* using static in recursive dangerous ? */
	static int index = 0;
	if (n < 0) {
		s[index++] = '-';
		s[index] = 
		n = -n;
		/* assert: this will happen only once */
	}
	else if (n / 10) {
		ritoa(n / 10, s);
	}
	/* assert: if this is not the last return, then index + 1 will be overwritten anyway. Otherwise, the '\0' will be useful */
	s[index++] = n % 10 + '0';
	s[index] = '\0';
}

int main() {
	char strig[100];
	ritoa(12345, strig);
	printf("%s\n", strig);
	return 0;
}
