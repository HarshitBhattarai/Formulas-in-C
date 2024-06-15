#include <stdio.h>

int main() 
{
    float bl, bw, height, volume;
    printf("Enter the length of the base of the pyramid: ");
    scanf("%f", &bl);
    printf("Enter the width of the base of the pyramid: ");
    scanf("%f", &bw);
    printf("Enter the height of the pyramid: ");
    scanf("%f", &height);
    volume = (1.0 / 3.0) * bl * bw * height;
    printf("Volume of the pyramid: %f", volume);
    return 0;
}