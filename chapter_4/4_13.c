#include <stdio.h>
#include <string.h>

int rreverse(char s[], int left, int right) {
	if (left >= right) {
		return 0;
	}
	else {
		char temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		return rreverse(s, left + 1, right - 1);
	}
}

int main() {
	char s[] = "wrong this is wrong";
	printf("%s\n", s);
	rreverse(s, 0, strlen(s) - 1);
	printf("%s\n", s);
	return 0;
}
