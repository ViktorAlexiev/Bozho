#include <stdio.h>
#include <stdlib.h>

#define DEBUG(var) printf("Name: %s\n", #var); \
                   printf("Value: %d\n", var); \
                   printf("File: %s\n", __FILE__); \
                   printf("Line: %d\n", __LINE__); 

int main()
{
    int a=10;
    DEBUG(a);
	
	return 0;
}
