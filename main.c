#include "world.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char* st1 = hello();
	char* st2 = goodbye();

	printf("%s\n", st1);
	printf("%s\n", st2);

	return 0;
}
