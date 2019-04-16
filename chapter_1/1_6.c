#include <stdio.h>

int main() {
	// Old Program
	/*int c = (getchar() != EOF);
	//putchar(c); this gives a weird 00 01 card-style char, as does assigning 1 to c and then putchar(c)
	if (c == 1) {
		printf("!EOF\n");
	} 
	// when user gives a ^C, execution stops as it goes to end of assembly output ?
	// So store input in file, and use cat <file> | a.out*/
	int c;
	while (c = getchar() != EOF) {
		if (c == 1) {
			printf("!EOF\n");
		}
	}
	if (c == 0) {
		printf("EOF\n");
	}
	// now problem here is that my file is 'abc', but doing cat file | ./a.out shows that file had 4 !EOF then EOF

	
	return 0;
}

