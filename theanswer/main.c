#include "dt.h"
#include <stdio.h>

int main(void)
{
	dt_base_value = 6;
	int answer = dt_get_answer();
	printf("The answer is %d\n", answer);
}