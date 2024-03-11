// C program that calculate and display the electricity bill
#include <stdio.h>
int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float chargesPerUnit, totalAmount, surcharge = 0;
    // Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate charges per unit based on units consumed
    if(unitsConsumed <= 300) {
        chargesPerUnit = 175;
    } else if(unitsConsumed <= 600) {
        chargesPerUnit = 200;
    } else if(unitsConsumed < 800) {
        chargesPerUnit = 300;
    } else {
        chargesPerUnit = 400;
    }
    // Calculate total bill before surcharge
    totalAmount = unitsConsumed * chargesPerUnit;
    // Apply surcharge if total bill exceeds Kshs 500
    if(totalAmount > 500) {
        surcharge = totalAmount * 0.20;
    }
    // Add surcharge to total bill
    totalAmount += surcharge;
    // Ensure minimum bill is Kshs 200
    if(totalAmount < 200) {
        totalAmount = 200;
    }
    // Display output
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: Ksh %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: Ksh %.2f\n", totalAmount);
    return 0;
}
