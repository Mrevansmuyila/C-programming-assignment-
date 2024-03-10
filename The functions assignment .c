//program to do math on books borrowed in library
#include <stdio.h>
int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);
    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate
    int fine;
    if (daysOverdue <= 7) {
        fine = daysOverdue * 20;
    } else if (daysOverdue <= 14) {
        fine = 7 * 20 + (daysOverdue - 7) * 50;
    } else {
        fine = 7 * 20 + 7 * 50 + (daysOverdue - 14) * 100;
    }
// Display book ID, due date, return date, and fine
// calculate fine amount
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Fine: Ksh. %d\n", fine);
return 0;
}
