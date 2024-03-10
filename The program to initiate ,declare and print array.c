//To declare, initialize, and print a 3-dimensional array `a[3][3][2]` in C programming
#include <stdio.h>
int main() {
    // Declare and initialize the array
    int a[3][3][2] = {{{0}}};
  // Print the array
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
