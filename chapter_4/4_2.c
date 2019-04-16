#include <stdio.h>
#include <ctype.h>
#define MAX 100

double atof(char s[])
{
	double value;
	double power;
	int i;
	int sign  = 1;
	int power_sign = 1;
	double sci_power = 1;
	int sci_power_mantissa = 0;
	

	// Skip Whitespace
	for (i = 0; isspace(s[i]); ++i); 

	/* Correction:
	 * We only need checj=k for - sign
	 * And we need check for + too, but that, just to skip it
	 * */

	sign = (s[i] == '-') ? -1 : 1;

	if (s[i] == '+' || s[i] == '-')
	{
		++i;
	}

	for (value = 0; isdigit(s[i]); ++i)
	{
		value = value * 10 + (s[i] - '0');
	}

	if (s[i] == '.')
	{
		++i;
	}

	for (power = 1; isdigit(s[i]); ++i)
	{
		value = value * 10 + (s[i] - '0');
		
		/*
		 * We are adding digits after the . as if there were no .
		 * In future, we will divide the whole result by a power of 10 equal to the number of digits after the .
		 * This power we multiply by 10 with each passing digit
		 * */
		power *= 10;
	}

	// return sign * value / power;

	if (s[i] == 'e' || s[i] == 'E')
	{
		++i;
	}

	power_sign = (s[i] == '-') ? -1 : 1;

	// The skip
	if (s[i] == '+' || s[i] == '-')
	{
		++i;
	}

	// Correction: When you build a number from a string, you start with a zero not a one
	for (sci_power_mantissa = 0; isdigit(s[i]); ++i)
	{
		sci_power_mantissa = sci_power_mantissa * 10 + (s[i] - '0');
	}



	// And now skip all garbage to the right
	
	for (int i = 0; i < sci_power_mantissa; ++i)
	{
		sci_power *= 10;
	}
	

	value /= power;

	if (power_sign == -1)
	{
		value /= sci_power;
	}
	else
	{
		value *= sci_power;
	}

	value *= sign;

	return value;
}

int main()
{
	char nummer[MAX];

	scanf("%s", nummer);

	double number = atof(nummer);

	printf("%lf\n", number);	

	return 0;
}





	

