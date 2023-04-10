#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for (i = 1; i <= 128;){
        printf("%d ", i);
        i *= 2;
    }
    return 0;
}
