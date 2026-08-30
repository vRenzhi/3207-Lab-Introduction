#include <stdlib.h>
//this is the random character generator function
char randchar(void)
{
	return 'A' + (rand() % 26);
}
