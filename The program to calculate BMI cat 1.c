//program to do body mass index
#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Prompt the user to enter weight and height
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display the calculated BMI
    printf("Your Body Mass Index (BMI) is: %.2f\n", bmi);

    return 0;
}
