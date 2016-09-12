#include <stdlib.h>
#include "world.h"

char* hello ()
{
	char* str = malloc( sizeof(*str) * 64 );
	str ="Hello world";
        return str;
}

