#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX 45

int main()
{
	int length_freq[MAX]; // biggest word is 45 characters	
	int word_length = 0;
	int c;
	int inyet = 0;
	int state = OUT;
	int max = 0;

	for(int i = 0; i < MAX; length_freq[i++] = 0);

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
			// not space before first word (and having nonzero word length ?) -> not requiured
			if (inyet)
			{
				// ith index records i + 1 freq, so that 0 is used
				++length_freq[word_length - 1];
			}
			// Reset
			word_length = 0;
		}
		else
		{
			inyet = 1;
			state = IN;
			++word_length;
		}
	}
	// stand in for histrogram
	/*for(int i = 0; i < MAX; i++)
	{
		printf("%d:%d\n",i + 1,length_freq[i]);	
	}*/

	for (int i = 0; i < MAX; i++)
	{
		if (length_freq[i] > max)
		{
			max = length_freq[i];
		}
	}
	/* Formula: Grid of MAX * max : MAX -> i, max -> j
	 * ijth cell is filled if length_freq[column] >= max - row
	 * */
	for (int row = 0; row < max; row++)
	{
		printf("%d ",max - row);
		for (int column = 0; column < MAX; column++)
		{
			if (length_freq[column] >= max - row)
			{
				printf("%c",'#');
			}
			else
			{
				printf("%c", ' ');
			}
			printf("  ");
		}
		putchar('\n');
	}
	printf("  ");
	for (int i = 0; i < MAX; i++)
	{
		printf("%02d ",i + 1);
	}
	return 0;
}


/*
 * When filling out a grid line by line, the blank spaces are as important as the 'filled; bits
 * */

