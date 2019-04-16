#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
	/* XOR x with a number which has n bits to right of p as 1 and others zero;
	 * XOR with 1 flips the bit, XOR with 0 retains it
	 * Make First n bits of 0 1,
	 * Then push thm into pos-i-tion
	 * */
	return (x ^ (~(~0 << n) << (p - n + 1))); 
}

int main()
{
	printf("%x\n", invert(0xff, 5, 4));
}

