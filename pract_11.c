#include <stdio.h>
int main()
{
    float l, b, h;
    float dl, db, wl, wb;
    float wall_area, door_area, window_area;
    float paint_area, roof_area;
    printf("Enter room length breadth height: ");
    scanf("%f %f %f", &l, &b, &h);
    printf("Enter door length and breadth: ");
    scanf("%f %f", &dl, &db);
    printf("Enter window length and breadth: ");
    scanf("%f %f", &wl, &wb);
    wall_area = 2 * h * (l + b);
    door_area = dl * db;
    window_area = 2 * wl * wb;
    paint_area = wall_area - door_area - window_area;
    roof_area = l * b;
    printf("Area be painted = %f\n", paint_area);
    printf("Area be whitewashed = %f", roof_area);

    return 0;
}
