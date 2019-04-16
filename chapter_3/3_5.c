#include <stdio.h>
#include <string.h>

#define MAX 34


int reverse(char s[])
{
	int i = 0;
	int j = strlen(s) - 1;
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i++] = s[j];
		s[j--] = temp;
	}

	return 0;
}

char ize(int d)
{
	return (d >= 0 && d < 10) ? ('0' + d) : ('a' + d - 10);
}


int itob(int n, char s[], int b)
{
	int j = 0;
	int sign = (n >= 0 ? 1 : 0);
	// Make positive
	n *= sign;
	do
	{
		s[j++] = ize(n % b);
		n /= b;
	}while (n);

	// if base 16, add the customary 0 bit to make it of form 0xdd
	if (j == 1 && b == 16) 
	{
		s[j++] = '0';
	}
	// In case hex, insert 0x in opposite order
	if (b == 16)
	{
		s[j++] = 'x';
		s[j++] = '0';
	}

	// If negative, insert - at end
	if (sign == -1)
	{
		s[j++] = '-';
	}

	// Terminate string
	s[j] = '\0';

	reverse(s);

	return 0;
}

int main()
{
	char nnary[MAX];
	int n;
	int b;

	scanf("%d%d", &n, &b);

	itob(n, nnary, b);

	printf("%s\n", nnary);

	return 0;
}

