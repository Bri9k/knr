#include <stdio.h>
#include <stdlib.h>

int binsearch(int x, int v[], int n)
{
	int low = 0;
	int high = n - 1;
	int mid = (low + high) / 2;
	while (low <= high && v[mid] != x)
	{
		if (x < mid)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}

		mid = (low + high) / 2;
	}
	if (v[mid] == x)
	{
		return mid;
	}
	else
	{
		return -1;
	}
}

int binsearch0(int x, int v[], int n)
{
	int low = 0;
	int high = n - 1;
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x < v[mid])
		{
			high = mid - 1;
		}
		else if (x > v[mid])
		{
			low = mid + 1;
		}
		else
		{
			return mid;
		}
	}
}

int main()
{
	int * array = malloc(sizeof(int) * 100000);
	for (int i = 0; i < 100000; i++)
	{
		array[i] = i;
	}
	
	int index = binsearch(23450, array, 100000);
	
	printf("%d\n", index);

	return 0;
}


