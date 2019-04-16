#include <stdio.h>

int main()
{
	float fahr,celsius;
	int lower,upper;
	lower = -17;
	upper = 148;
	celsius = lower;
	printf("Celsius\tFahr\n");
	while (celsius <= upper)
	{
		fahr = 9.0 / 5.0 * celsius + 32;
		printf("%-6.1f\t%-3.0f\n",celsius,fahr);
		celsius += 11;
	}
	return 0;
}

/*
 * '9' is automatically interpreted as an integer, '9.0' as a float.
 * %l.p: l is length occupied, starting from left (blank spaces added as required)
 * p is precision: no of decimal points
 * when 'l' is negative, the leftmost digits are aligned, wheras when l is positive, rightmost digits are aligned. But total space occupied is
 * same in both cases
 * The assignment lower = fahr causes loss of precision, with truncation of remaining digits
 * */
