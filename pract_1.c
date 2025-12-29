#include <stdio.h>

int main()
{
    float r, area, circum;

    printf("Enter radius: ");
    scanf("%f", &r);

    area   = 3.14f * r * r;
    circum = 2.0f * 3.14f * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circum);

    return 0;
}


