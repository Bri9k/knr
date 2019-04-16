#include <stdio.h>

int degtofara(int degree)
{
	return ((9.0/5.0) * degree) + 32;
}

int main()
{
	for (int deg = 0; deg <= 100; deg += 10)
	{
		printf("%3d\t%3d\n",deg,degtofara(deg));
	}
	return 0;
}
		
