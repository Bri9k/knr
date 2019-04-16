#include <stdio.h>

#define swap(t, x, y) ({t temp; temp = x; x = y; y = temp;})


int main() {
	int x = 42;
	int y = 0;
	swap(int, x, y);
	printf("%d\t%d\n", x, y);
	return 0;
}
