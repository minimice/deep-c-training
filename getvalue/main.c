#include <stdio.h>

int get_value(); // declaration, but not a prototype

int main() 
{
    printf("%d\n",get_value());
    printf("%d\n",get_value(42));
	printf("%d\n",get_value(42,24));
	return 0;
}

int get_value() // takes in whatever
{
	return 42;
}
