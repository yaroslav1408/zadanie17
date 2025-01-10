#include <stdio.h>

float calculateVolume(float length, float width, float height) {
    return length * width * height;
}

int main() {
    float length, width, height, volume;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    printf("Enter height: ");
    scanf("%f", &height);

    volume = calculateVolume(length, width, height);

    printf("The volume of the rectangular prism is: %.2f\n", volume);

    return 0;
}
