#include <stdlib.h>
#include "world.h"

char* goodbye ()
{
	char* str = malloc( sizeof(*str) * 64 );
        str="Goodbye world";
        return str;
}

