#include <stdio.h>

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char is: %lu byte(s) \n", (unsigned long)sizeof(d));
	printf("size of an int is: %lu byte(s) \n", (unsigned long)sizeof(a));
	printf("size of long int is: %lu byte(s) \n", (unsigned long)sizeof(b));
	printf("size of long long int is: %lu byte(s) \n", (unsigned long)sizeof(c));
	printf("size of float is: %lu byte(s) \n", (unsigned long)sizeof(f));
	return(0);	
}

