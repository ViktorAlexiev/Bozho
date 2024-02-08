#include <stdio.h>
#include <stdlib.h>

#define GREATER(a, b) (a>b) ? a:b

int main()
{
    int a=3, b=6;
    printf("%d", GREATER(a, b));
	
	return 0;
}
