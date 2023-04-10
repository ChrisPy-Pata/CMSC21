#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days, start_of_day, s, t;

    // ask the user
    printf("Enter the number of days in month: ");
    scanf("%d", &days);

    // execute if the value of days is not 28, 29, 30, or 31
    if ((days <28)|| (days >31)){
        printf("\nNUMBER OF DAYS IS INVALID\n");
    }// execute if the value of days is 28, 29, 30, or 31
    else{
        printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_of_day);

    // create whitespace
    for (s = 1; s < start_of_day; s++){
        printf("   ");
    }// create a calendar list
    for (t = 1; t <= days; s++, t++){
        printf("%3d", t);
        if (s % 7 == 0 ){ // create a new line
            printf("\n");
        }
    }

    }
    return 0;
}
