#include <stdio.h>

int main()
{
    float a, b, AM, HM;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    AM = (a + b) / 2;
    HM = a * b / (a + b);

    printf("Arithmetic Mean = %f\n", AM);
    printf("Harmonic Mean = %f", HM);

    return 0;
}
