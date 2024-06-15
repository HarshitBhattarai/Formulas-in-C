#include <stdio.h>

int main() 
{
    float radius, height, volume;
    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);
    printf("Enter the height of the cone: ");
    scanf("%f", &height);
    volume = (1.0/ 3) * 3.14* radius * radius * height;
    printf("Volume of the cone is %f", volume);
    return 0;
}
