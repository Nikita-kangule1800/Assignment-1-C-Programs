#include <stdio.h>

int main()
{
    float u, a, t, v, s;

    printf("Enter u, a and t: ");
    scanf("%f %f %f", &u, &a, &t);

    v = u + a * t;
    s = u + a * t * t;

    printf("Final Velocity = %.2f\n", v);
    printf("Distance = %.2f", s);

    return 0;
}
