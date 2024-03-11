//c program to compare numbers
#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    if (number < 10) {
        printf("Your number is smaller than 10\n");
    } else {
        printf("Your number contains more than two digits\n");
    }
    return 0;
}
