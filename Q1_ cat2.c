//C program that calculates the tax based on the given conditions:
#include <stdio.h>
int main() {
    float salary, tax;
    printf("Enter the yearly salary of the employee: ");
    scanf("%f", &salary);
    if (salary <= 400000) {
        tax = salary * 0.01;
    } else if (salary > 400000 && salary <= 1000000) {
        tax = 400000 * 0.18 + (salary - 400000) * 0.158;
    } else {
        tax = 400000 * 0.18 + 600000 * 0.15 + (salary - 1000000) * 0.25;
    }
    printf("Tax to be paid: %.2f\n", tax);
    return 0;
}
