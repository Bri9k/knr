#include <stdio.h>
#include <string.h>

#define MAX 20

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

void itoa(int n, char s[], int l)
{
	int i, sign;
	
	if ((sign = n) < 0) n = -n;
	
	i = 0;
	
	do 
	{
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	
	if (sign < 0) s[i++] = '-';

	if (i < l)
	{
		while (i < l)
		{
			s[i++] = ' ';
		}
	}

	
	s[i] = '\0';
	
	reverse(s);
}

int main()
{
	char nnary[MAX];
	int n;
	int b;

	scanf("%d%d", &n, &b);

	itoa(n, nnary, b);

	printf("%s\n", nnary);

	return 0;
}
