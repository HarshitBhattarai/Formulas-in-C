#include <stdio.h>
#include <math.h>
int main() 
{
    float side, height, volume;
    printf("Enter the side length of the hexagonal prism: ");
    scanf("%f", &side);
    printf("Enter the height of the hexagonal prism: ");
    scanf("%f", &height);
    volume = (3 * sqrt(3) / 2) * side * side * height;
    printf("Volume of the hexagonal prism is %f", volume);
    return 0;
}