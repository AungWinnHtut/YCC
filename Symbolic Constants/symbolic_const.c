#include <stdio.h>
#include <stdlib.h>
#include "symbol.c"
int i=4; //external variable or global variable


int main()
{
    float a,r;
    r=22.4;
    a=PI*r*r;
    PRINTHELLO;
    printf("Hello world! %f\n",a);
    return 0;
}
