#include <stdio.h>
int main() 
{
    float base, hbase, height, volume;
    printf("Enter the base length of the triangular prism: ");
    scanf("%f", &base);
    printf("Enter the height of the base of the triangular prism: ");
    scanf("%f", &hbase);
    printf("Enter the height of the triangular prism: ");
    scanf("%f", &height);
    volume = 0.5 * base * hbase * height;
    printf("Volume of the triangular prism is %f", volume);
    return 0;
}