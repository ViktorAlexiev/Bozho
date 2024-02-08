#include <stdio.h>
#include <stdlib.h>

#define SWAP(A, B, TYPE ) TYPE temp=A; \
                          A=B; \
                          B=temp;


int main()
{
    char a=1;
    char b=2;

    printf("a=%d b=%d\n", a, b);
    SWAP(a, b, int);
    printf("a=%d b=%d\n", a, b);

    return 0;
}


