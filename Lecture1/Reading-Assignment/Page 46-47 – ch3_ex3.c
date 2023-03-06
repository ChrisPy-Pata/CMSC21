/* Adds two fractions */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // create multiple int variables
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    // variable num1 and denom1 value is taken from the user
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    // variable num2 and denom2 value is taken from the user
    scanf("%d/%d", &num2, &denom2);

    // numerator
    result_num = num1 * denom2 + num2 * denom1;

    // denominator
    result_denom = denom1 * denom2;

    // prints result_num/result_denom
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
