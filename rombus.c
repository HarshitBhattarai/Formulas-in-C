#include <stdio.h>

int main() 
    {
    float diagonal1, diagonal2, area;
    printf("Enter the length of the first diagonal of the rhombus: ");
    scanf("%f", &diagonal1);

    printf("Enter the length of the second diagonal of the rhombus: ");
    scanf("%f", &diagonal2);
    area = (diagonal1 * diagonal2) /2;
    printf("The area of the rhombus with diagonals %.2f and %.2f is %.2f\n", diagonal1, diagonal2, area);

    return 0;
}