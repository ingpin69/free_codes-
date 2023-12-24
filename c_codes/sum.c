#include <stdio.h>

int main()
{
    int num1, num2, resultsum, resultmultiply, resultdivision, resultmod, resultsrbtract;

    printf("Enter the first  number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    resultsum = num1 + num2;
    resultmultiply = num1 * num2;
    resultdivision = num1 / num2;
    resultmod = num1 % num2;
    resultsrbtract = num1 - num2;
    printf("the sum of 2 numbers are %d \n", resultsum);
    printf("the subtract of 2 numbers are %d \n", resultsrbtract);
    printf("the multiply of 2 numbers are %d \n", resultmultiply);
    printf("the mod of 2 numbers are %d \n", resultmod);
    printf("the division of 2 numbers are %d \n ", resultdivision);
    return 0;
}
