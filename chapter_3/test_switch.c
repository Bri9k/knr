#include <stdio.h>

int main()
{
	double that = 5.67;

	switch ((int)that)
	{
		case 0:
			printf("%d\n", 0);
			break;
		case 1:
			break;
			printf("%d\n", 1);
		
		case 5:
			printf("%d\n", 5);
			break;
		
		case 6:
			printf("%d\n", 6);
			break;
		
		default:
			printf("WTF\n");
			break;
	}
	return 0;
}
