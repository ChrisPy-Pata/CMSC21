#include <stdio.h>
#include <stdlib.h>

int main()
{
    // header
    printf("TABLE OF POWERS OF TWO\n\n");
    printf(" n\t 2 to the n\n");
    printf("---\t------------\n");


    int count = 1;
    // for loop to create a ten list of power of 2
    for(int n = 0; n <= 10; n++){
            // execute if value of n is equal to zero (first one to display)
            if ( n == 0){
                printf(" 0\t\t1\n");
                continue;
            } // execute if n is not equal to zero
            else{
                count *= 2; // continue to increase to get the power of two for each iteration
                printf(" %d\t\t%d\n", n, count);
            }

    }
    return 0;
}
