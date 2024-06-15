#include <stdio.h>
int main() 
{
    float areaofbase, height, volume;
    printf("Enter the area of the base of the prism: ");
    scanf("%f", &areaofbase);
    printf("Enter the height of the prism: ");
    scanf("%f", &height);
    volume = areaofbase * height;
    printf("The volume of the prism is: %f\n", volume);

    return 0;
}