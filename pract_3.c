#include <stdio.h>

int main()
{
    float F, C, K;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    C = (5.0/9) * (F - 32);
    K = C + 273.15;

    printf("Celsius = %.2f\n", C);
    printf("Kelvin = %.2f", K);

    return 0;
}
