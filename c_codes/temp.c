#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter the temperature in Celcius : ");
    scanf("%f", &c);
    f = 9.0 / 5.0 * c + 32;
    printf("the temperature in celcius is %f", f);
    return 0;
}