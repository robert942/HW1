#include <stdio.h>
#include <stdlib.h>

int m7(void) 
{
    int x;

    printf("一次\t平方\t立方\n");

    for (x = 0; x <= 10; x++)
        printf("%d\t%d\t%d\n", x, x * x, x * x * x);

    return 0;

}