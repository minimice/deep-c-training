#include <stdio.h>

static int calc(int a, int b, int c)
{
	return a * b /c;
}

int universe = 7;
static int life(void) { return 6; }
int everything(void) { return 1; }

// -std=c99

int main (void)
{
	// order of evaluation is unspeicified.  Compiler might choose to evaluate life() first
	int a = calc(universe, life(), everything());
	printf("The answer is %d\n", a);
	// c99 compiler will return 0 to indicate success
	// c89 older compilers will return 17, which is garbage from a register
	
}