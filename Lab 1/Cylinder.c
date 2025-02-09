#include <stdio.h>
#define PI 3.1416

int main()
{
    double height, radius, volume, surface_area;
    
    height = 10.0;
    
    printf("Please enter the radius of the cyclinder: ");
    scanf("%lf", &radius);
    
    volume = PI * radius * radius * height;
    surface_area = (2 * PI * radius * height) + (2 * PI * radius * radius);
    
    printf("\nRadius: %.2lf, Height: %.2lf, Volume: %.2lf, Surface Area: %.2lf", radius, height, volume, surface_area);
    
    return (0);
}