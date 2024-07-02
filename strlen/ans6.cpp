#include <stdio.h>

int main() {
    int rows = 5;  // Number of rows in the pattern
    
    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        // Print spaces between the two parts
        for (int k = 1; k <= 2 * (rows - i); k++) {
            printf(" ");
        }
        
        // Print numbers from i down to 1
        for (int l = i; l <= 1; l--) {
            printf("%d", l);
            if (l > 1) {
                printf(" ");
            }
        }
        
        // Move to the next line after each row is printed
        printf("\n");
    }
    
    return 0;
}
