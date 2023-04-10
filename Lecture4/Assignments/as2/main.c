#include <stdio.h>
#include <stdlib.h>

int main()
{
    // While loop
    int i = 11;

    while (i < 10){
        printf("Hello World");
        i--;
    }
    printf("While loop will not run\n");
    // For loop
    for (i=11; i < 10; i--){
        printf("Hello World");
    }
    printf("For loop will not run\n");
    // Do - while loop
    i = 11;
    do{
        printf("Hello World!");
        i--;
    } while (i < 10);

    return 0;
}
