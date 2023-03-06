// Prints int and float values in various formats
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // create int and float variables
    int i;
    float x;

    // assign a value to each variable
    i = 40;
    x = 839.21f;

    // prints |40|   40|40   |  040|
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    // prints |   839.210|8.392e+002|839.21    |
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x, x);

    return 0;
}
