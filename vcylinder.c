#include <stdio.h>
int main() 
    {
    float radius, height, volume;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    volume = 3.14 * radius * radius * height;
    printf("Volume of the cylinder: %f", volume);
    return 0;
}