#include <stdio.h>

#define MAX 100

int escape(char s[], char t[])
{
	int i = 0;
	int j = 0;
	while (t[i] != '\0')
	{
		switch (t[i])
		{
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				printf("%d \\t\n", i);
				break;
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				printf("%d \\n\n", i);
				break;
			case  ' ':
				s[j++] = '\\';
				s[j++] = 'b';
				printf("%d \\b\n", i);
				break;
			default:
				s[j++] = t[i];
				printf("%d %c\n", i, t[i]);
				break;
		}
		++i;
	}
	s[j++] = '\0';
}

int unescape(char t[], char s[])
{
	int i = 0;
	int j = 0;
	int c = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\\')
		{
			switch (s[i + 1])
			{
				case 't':
					t[j++] = '\t';
					i += 2;
					break;
				case 'b':
					t[j++] = ' ';
					i += 2;
					break;
				case 'n':
					t[j++] = '\n';
					i += 2;
					break;
				default:
					t[j++] = s[i++];
					break;
			}
		}
		else
		{
			t[j++] = s[i++];
		}
	}
	t[j] = '\0';
}

int main()
{
	char escaped[MAX] = "kill\\bme\\bnow\\b\\t\\t\\nKill\\beveryone";
	char unescaped[MAX];

	unescape(unescaped, escaped);
	printf("%s\n\n%s\n", escaped, unescaped);

}

					






