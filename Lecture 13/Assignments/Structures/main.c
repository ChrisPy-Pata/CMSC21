#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// structure 'line'
struct line{
    struct point{ // nested structure 'point'
        float x;
        float y;
    }point1, point2; point1, // variables poin1, and point 2 declaration
    float *midpoint; // midpoint array
    float slope;
    float distance;
}line1; // variable line1 declaration

// functions declaration
float solveSlope(struct line line1);
float *solveMidpoint(struct line line1);
float solveDistance(struct line line1);
void getSlopeInterceptForm(struct line line1);

//main function
int main()
{   //ask the user to enter the value of x and y for point1
    printf("Enter x and y for point1: ");
    scanf("%f %f",&line1.point1.x, &line1.point1.y);
    //ask the user to enter the value of x and y for point2
    printf("Enter x and y for point2: ");
    scanf("%f %f",&line1.point2.x, &line1.point2.y);

    //variables declaration
    float slope, *midpoint, distance, y;

    //solveSlope function call and store the value the variable slope
    slope = solveSlope(line1);
    printf("Slope: %f", slope); //print the value of slope

    //solveMidpoint function call and store the updated array value to the variable midpoint
    midpoint = solveMidpoint(line1);
    printf("\nMidpoint: %f %f", midpoint[0], midpoint[1]); //printing the value of the 2 midpoint array elements: x,y

    //solveDistance function call and store the value to the variable distance
    distance = solveDistance(line1);
    printf("\nDistance between 2 points: %f", distance); // print the value of distance
    // getSlopeInterceptForm function call
    getSlopeInterceptForm(line1); //return a print statement

    return 0;
}
//solveSlope function
float solveSlope(struct line line1){
    float m, x1,x2, y1,y2; // variables declaration
    // assigning value to the x and y variables
    x1 = line1.point1.x;
    x2 = line1.point2.x;
    y1 = line1.point1.y;
    y2 = line1.point2.y;
    // solve for slope
    m = (y2 - y1)/(x2 - x1);
    return m; // return the m (slope)
}
// solveMidpoint function that returns a array point
float *solveMidpoint(struct line line1){
    static float mp[2]; // variables declaration
    float x1,x2,y1,y2;
    // assigning value to the x and y variables
    x1 = line1.point1.x;
    x2 = line1.point2.x;
    y1 = line1.point1.y;
    y2 = line1.point2.y;
    // solving for midpoint for both x and y coordinates
    mp[0] = (x1+x2)/2;
    mp[1] = (y1+y2)/2;

    return mp; // return array mp
}
// solveDistance function
float solveDistance(struct line line1){
    float dist, x1,x2,y1,y2; // variables declaration
    // assigning value to the x and y variables
    x1 = line1.point1.x;
    x2 = line1.point2.x;
    y1 = line1.point1.y;
    y2 = line1.point2.y;
    // solving the distance between two points: point1, and point2
    dist = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2-y1));
    return dist; // return dist
}
// getSlopeInterceptForm function
void getSlopeInterceptForm(struct line line1){
    float m,b, x1,x2, y1,y2; // variables declaration
    //assigning value to the x and y variables
    x1 = line1.point1.x;
    x2 = line1.point2.x;
    y1 = line1.point1.y;
    y2 = line1.point2.y;
    //solve for slope
    m = (y2 - y1)/(x2 - x1);
    b = y2-(m*x2); // solve for the b in y = mx + b
    //print the value of slope intercept form
    printf("y = %fx + %f", m, b);

}
