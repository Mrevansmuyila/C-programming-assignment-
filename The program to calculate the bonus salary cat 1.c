//prgram to do salary bonus
#include <stdio.h>

int main() {
    double salary, bonus = 0;
    int years_of_service;

    // Prompt the user to enter their salary and years of service
    printf("Enter your salary: ");
    scanf("%lf", &salary);
    printf("Enter your years of service: ");
    scanf("%d", &years_of_service);

    // Check if the employee's years of service is more than 5
    if (years_of_service > 5) {
        // Calculate bonus (5% of salary)
        bonus = 0.05 * salary;
    }

    // Print the net bonus amount
    printf("Net bonus amount: %.2f\n", bonus);

    return 0;
}
