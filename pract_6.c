#include <stdio.h>

int main()
{
    float l, b, h, surface_area, volume;

    printf("Enter length, breadth and height: ");
    scanf("%f %f %f", &l, &b, &h);

    surface_area = 2 * (l*b + l*h + b*h);
    volume = l * b * h;

    printf("Surface Area = %f\n", surface_area);
    printf("Volume = %f", volume);

    return 0;
}
