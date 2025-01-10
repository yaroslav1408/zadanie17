#include <stdio.h>
#include <math.h>

double calculateSphereVolume(double radius) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

int main() {
    double radius;


    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    double volume = calculateSphereVolume(radius);
    printf("Volume of the sphere: %.2f\n", volume);

    return 0;
}
