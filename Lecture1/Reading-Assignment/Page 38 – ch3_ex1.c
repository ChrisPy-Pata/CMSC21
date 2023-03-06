// replace the conversion specifier to the values of the variables using printf function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // create int and float variables
    int i, j;
    float x, y;

    // assign a value to each variable
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    // prints the values of the variables i = 10, j = 20, x= 43.289200, y = 5527.000000
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
    return 0;
}
