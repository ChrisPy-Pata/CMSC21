#include <stdio.h>
#include <stdlib.h>

int main()
{
    // letter A
    int m = 9, n = 9, i, j;
    // declare and initialize the multidimensional boolean array, road_networks.
    _Bool road_networks[9][9] = {
    {1,1,0,0,0,1,0,0,0},
    {1,1,1,0,0,0,0,0,0},
    {0,1,1,0,1,1,0,0,1},
    {0,0,0,1,1,0,0,0,0},
    {0,0,0,1,1,0,0,0,0},
    {1,0,1,0,0,1,0,0,0},
    {1,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1},
    {0,0,0,0,0,0,0,1,1}};

    // letter B
    printf("\nThe Adjacency Matrix is: \n\n");
    printf("a\tb\t[c]\t[d]\te \tf\tg\th\ti\n");

    //row
    for (i=0;i<m;i++)
    {   //column
        for(j = 0; j < n; j++){
            printf("%d\t", road_networks[i][j]);
        }
        printf("\n");
    }

    // letter C

    int point;
    // print a list on what are the numbers that the user can input
    printf("\n\nWhich point are you located? \n0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8 - I\n\n");
    scanf("%d", &point);

    switch(point){
    // case 0, 1, and 5 will go to charging station C
    case 0:
        printf("At point: %d\n", point);
        printf("point: C arrived to charging station\n");
        break;
    case 1:
        printf("At point: %d\n", point);
        printf("point: C arrived to charging station\n");
        break;
    case 5:
        printf("At point: %d\n", point);
        printf("point: C arrived to charging station\n");
        break;
    // case 4, and 6 will go to charging station D
    case 4:
        printf("At point: %d\n", point);
        printf("point: D arrived to charging station\n");
        break;
    case 6:
        printf("At point: %d\n", point);
        printf("point: D arrived to charging station\n");
        break;
    // case 7 and 8 pathway to the charging station C and D doesn't exist
    case 7:
        printf("At point: %d\n", point);
        printf("Can't go to a charging station (no pathway)\n");
        break;
    case 8:
        printf("At point: %d\n", point);
        printf("Can't go to a charging station (no pathway)\n");
        break;
    // case 2 and 3 is a charging station
    case 2:
        printf("C is a charging station\n");
        break;
    case 3:
        printf("D is a charging station\n");
        break;
    default: // INVALID INPUT if user will input a number not in 0-8
        printf("INVALID INPUT");
    }
    return 0;
}
