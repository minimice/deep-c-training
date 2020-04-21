#include "mystatlib.h"
#include <stdbool.h> //#defined bool _Bool

typedef bool comparator(int, int);

// static to reduce visibility only to this file
static bool left_smaller_than_right(int left, int right)
{
	return left < right;
}

static bool left_greater_than_right(int left, int right)
{
	return left > right;
}

double get_average(int size, int array[])
{
	int sum = 0;
	for (int counter = 0; counter < size; counter++) 
	{
		sum += array[counter];
	}
	return sum/(double)size;
}

static int calculate_using_comparator(int size, int array[], comparator my_comparator)
{
	int found_value = array[0];
	for (int counter = 1; counter < size; counter++) 
	{
		if (my_comparator(array[counter],found_value))
		{
			found_value = array[counter];
		}
	}
	return found_value;
}

int get_min(int size, int array[])
{
	return calculate_using_comparator(size,array,left_smaller_than_right);
}

int get_max(int size, int array[])
{
	return calculate_using_comparator(size,array,left_greater_than_right);
}
