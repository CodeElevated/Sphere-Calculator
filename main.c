#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Declare important functions
float calculateVolume(float radius, float PI);
float calculateSurfaceArea(float radius, float PI);

int main()
{
    const float PI = 3.1415926536;
    float radius, volume, surfaceArea;

    // Get the radius from the user
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate the volume
    volume = calculateVolume(radius, PI);

    // Calculate the surface area
    surfaceArea = calculateSurfaceArea(radius, PI);

    // Output the volume and surface area of the sphere
    printf("The volume of the sphere is: %.2f\n", volume);
    printf("The surface area of the sphere is: %.2f\n", surfaceArea);

    return 0;
}

//Define function to calculate volume
float calculateVolume(float radius, float PI)
{
    return (4.0 / 3.0) * PI * pow(radius, 3);
}

//Define function to calculate surface area
float calculateSurfaceArea(float radius, float PI)
{
    return 4 * PI * pow(radius, 2);
}
