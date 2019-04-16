#include <stdio.h>


/*
 * When rightmost bit of x is one, that of x - 1 is 0. So x & (x - 1) deletes the bit
 * When first rightmost 1 bit is in nth position, the 0 to (n - 1)th bits of x - 1 become 1, while nth bit becomes 0
 * Thus, the described operation destroys the rightmost 1 bit in x
 * Now x & (x - 1) deletes the first 0 to (n - 1)th bits (0 in x, 1 in x - 1), as well as the nth (0 in x - 1, 1 in x).
 * The bits to the left remain unchanged, as (A & A == A)
 * */

unsigned bitcount(unsigned x)
{
	int i = 0;
	while (x)
	{
		x &= (x - 1);
		++i;
	}
	return i;
}

int main()
{
	printf("%x\n", bitcount(0xff));
	return 0;
}

