#include <stdio.h>S
int main() 
    {
    int length, width, area;
    printf("Enter length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter width of the rectangle: ");
    scanf("%d", &width);
    area = length * width;
    printf("The area of the rectangle with length %d and width %d is %d", length, width, area);
    return 0;
}