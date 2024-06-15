#include <stdio.h>

int main() 
{
    int length, width, height, volume;
    printf("Enter the length of the rectangular prism: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangular prism: ");
    scanf("%d", &width);
    printf("Enter the height of the rectangular prism: ");
    scanf("%d", &height);
    volume = length * width * height;
    printf("Volume of the rectangular prism: %d", volume);
    return 0;
}