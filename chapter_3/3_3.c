#include <stdio.h>
#include <ctype.h>
#define MAX 100

int expand(char s1[], char s2[])
{
	int i, j;
	int c;
	int control = 0;
	int n;
	j = 0;
	for (i = 0; s1[i] != '\0'; ++i)
	{
		if (s1[i] == '-' )
		{
			if (i != 0 && s1[i + 1] != '\0' && s1[i - 1] != s1[i + 1] && ((isalpha(s1[i - 1]) && isalpha(s1[i + 1])) || (isdigit(s1[i - 1]) && isdigit(s1[i + 1]))))
			{
				control = s1[i - 1] < s1[i + 1] ? 1 : -1;	
				printf("%c %c -> %d\n", s1[i - 1], s1[i + 1], control);
				/* if (a > b), (-a < -b)
				 * Note: Though cool, this is a bad programming practice
				 * */
				for (c = s1[i - 1] + control; c * control <= (s1[i + 1] - control) * control; c += control)
				{
					s2[j++] = c;
				}
			}
			else
			{
				s2[j++] = '-';
			}
		}
		else
		{
			s2[j++] = s1[i];
		}
	}
	s2[j] = '\0';
	return i + 1;
}

int main()
{
	char s1[MAX] = "-9-0-7a-kl-m-";
	char r[MAX];

	expand(s1, r);

	printf("%s\n%s\n", s1, r);

	return 0;
}




