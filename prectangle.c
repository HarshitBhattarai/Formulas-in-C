#include <stdio.h>
int main() 
{
    int l, w, perimeter;
    printf("Enter length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter width of the rectangle: ");
    scanf("%d", &w);
    perimeter = 2 * (l + w);
    printf("Perimeter of the rectangle is %d", perimeter);
    return 0;
}