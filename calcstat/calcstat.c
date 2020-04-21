#include "mystatlib.h"

#include <stdio.h>

// if something was declared here it would go into the data segment
// e.g. x = 1;

int main(void) 
{
	#defined MAX_ENTRIES 100
    int array[MAX_ENTRIES];
	int total_entered_numbers = 0;
	int entered_number = 0;
	while (scanf("%d\n",&entered_number) != EOF)
	{
		array[total_entered_numbers] = entered_number;
		total_entered_numbers++;
	}
	
	int minimum_value = get_min(total_entered_numbers, array);
	int maximum_value = get_max(total_entered_numbers, array);
	double average = get_average(total_entered_numbers, array);
	
	printf("n=%d,average=%f,min=%d,max=%d\n", total_entered_numbers,
	average, minimum_value, maximum_value);
    return 0;
}
