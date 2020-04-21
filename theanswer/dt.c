#include "dt.h"

int dt_base_value;
#define MULTIPLIER 7
static int dt_answer;

static void run_computer(void)
{
	dt_answer = dt_base_value * MULTIPLIER;
}

int dt_get_answer(void)
{
	run_computer();
	return dt_answer;
}
