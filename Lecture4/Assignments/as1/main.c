#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    while (i <= 128){
        printf("%d ", i);
        i *= 2;
    }

    _Bool arr[2] = {1,0};
    printf("\n%d", arr[0]);
    return 0;
}
