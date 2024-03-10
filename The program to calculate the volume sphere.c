// program to calculate volume of a sphere
#include <stdio.h>
#include <math.h>

double calculateSphereVolume(double radius) {
    double volume;
    const double PI = 3.14159265358979323846;

    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    return volume;
}

int main() {
    double radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    volume = calculateSphereVolume(radius);

    printf("Volume of the sphere with radius %.2f is %.2f\n", radius, volume);
  return 0;
}
