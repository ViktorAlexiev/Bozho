#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    int elements[SIZE] = {1, 2, 3, 4, 5};
    for(int i=0; i<SIZE; i++){
        printf("%d", elements[i]);
    }
	
	return 0;
}
