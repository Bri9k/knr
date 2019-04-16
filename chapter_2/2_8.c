#include <stdio.h>

unsigned rightrot(unsigned x, int n)
{	
	/* Note the 'clever' use of recursion
	 * rotation by 0 is no rotation
	 * Manufacture a number having it's leftmost bit as the rightmost bit of x, and OR it with x rotated to the right once to place it in the 	   * rightmost bit of the result
	 * Rotation by n is recursive rotation, with each call rotating once
	 * */

	if (n == 0) return x;

	else if (n == 1) return (x >> 1) | ((0 | (x & 1)) << (sizeof(unsigned) * 8 - 1));

	else return rightrot(rightrot(x, 1), n - 1);
}


int main()
{
	unsigned x = ((unsigned)1 << (sizeof(unsigned) * 8 - 1));

	printf("%x\n", x);

	printf("%x\n", rightrot(x, sizeof(unsigned) * 8 - 1));
}


