//program to do math
#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
    double radius, height, volume, surface_area;

    // Prompt the user to enter the radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate the volume
    volume = PI * pow(radius, 2) * height;

    // Calculate the surface area
    surface_area = 2 * PI * pow(radius, 2) + 2 * PI * radius * height;

    // Display the results
    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surface_area);
return0
}
