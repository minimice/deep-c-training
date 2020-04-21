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
	int a = calc(universe, life(), everything());
	printf("The answer is %d\n", a);
}