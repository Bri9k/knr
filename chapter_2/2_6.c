#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	// set rightmost n bits of x to zero and OR them with the chosen bits of y (n towards right from pth)
	return (x & (~0 << n)) | ((y >> (p - n + 1)) & ~(~0 << n));	
}
/* Why y >> (p - n + 1) ?
 * Suppose you want 3 bits from four- 4,3,2.
 * 2th bit should go to 0th bit
 * So suppose you want p,n then (p - n + 1)th bit should go to 0th bit
 * p, p - 1, ... p - n gives n + 1 total bits
 * p, p - 1, ... p - n + 1 gives n total bits. It INCLUDES pth bit
 * */

int main()
{
	unsigned x = 0xa0;
	unsigned y = 0xaa;

	unsigned z = setbits(x, 7, 4, y);

	printf("%x\n", z);
}
