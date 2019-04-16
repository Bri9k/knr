#include <stdio.h>

int main()
{
	int prev_c = ' ';
	int meta_prev_c = ' ';
	int c;
	int in_c_comment = 0;
	int in_cpp_comment = 0;
	int dont_know = 0;

	while ((c = getchar()) != EOF)
	{

		if (c == '*' && prev_c == '/' && in_c_comment == 0 && in_cpp_comment == 0)
		{
			in_c_comment = 1;
		}
		else if (c == '/' && prev_c == '/' && in_c_comment == 0 && in_cpp_comment == 0)
		{
			in_cpp_comment = 1;
		}
		else if (c == '/' && prev_c == '*' && in_c_comment)
		{
			in_c_comment = 0;
		}
		else if (c == '\n' && in_cpp_comment)
		{
			in_cpp_comment = 0;
		}
		else if (in_c_comment == 0 && in_cpp_comment == 0 && dont_know == 0)
		{
			/* cant decide whether to print '/' until characters surrounding it are known.
			 * we know the past but not the future
			 * so wait till next turn to print '/'
			 * check the surrounding characters
			 * */
			if (prev_c == '/' && c != '*' && c != '/' && meta_prev_c != '*')
			{
				printf("<c:%c>", c);
				printf("prev_c:");
				putchar(prev_c);
			}
			if (c != '/')
			{
				putchar(c);
			}
		}

		//printf("\n[in_c_comment: %d\n in_cpp_comment: %d\n dont_know: %d\n c = %c\n prev_c = %c]\n", in_c_comment, in_cpp_comment, dont_know, c, prev_c);
		meta_prev_c = prev_c;	
		prev_c = c;
	}

	return 0;
}

