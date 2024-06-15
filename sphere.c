
#include <stdio.h>
float calculateSphereVolume(float radius) {
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

int main() {
    char choice;
    
    do {
        float radius;

        printf("Enter the radius of the sphere: ");
        scanf("%f", &radius);

        if (radius < 0) {
            printf("Radius cannot be negative.\n");
            continue;
        }

        float volume = calculateSphereVolume(radius);
        printf("The volume of the sphere with radius %.2f units is %.2f cubic units.\n", radius, volume);

        printf("Do you want to calculate the volume of another sphere? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' && choice == 'Y');

    return 0;
}