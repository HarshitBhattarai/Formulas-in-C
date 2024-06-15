#include <stdio.h>
int main() 
    {
    float length, width, height;
    float BottomArea, BackArea, leftRightArea, totalSurfaceArea;
    printf("Enter the length of the prism: ");
    scanf("%f", &length);
    printf("Enter the width of the prism: ");
    scanf("%f", &width);
    printf("Enter the height of the prism: ");
    scanf("%f", &height);
    BottomArea = length * width;
    BackArea = height * width;
    leftRightArea = height * length;
    totalSurfaceArea = 2 * (BottomArea + BackArea + leftRightArea);
    printf("The surface area of the rectangular prism is %f", totalSurfaceArea);S
    return 0;
}