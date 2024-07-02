#include <stdio.h>

int main() {
    int rows = 5;  // Number of rows in the pattern
    
    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // First and last rows are complete stars
        if (i == 1 || i == rows) {
            for (int j = 1; j <= 5; j++) {
                printf("* ");
            }
        } else if (i == 4) { // fourth row is a single star
            printf("*\n");
        } else {
        	printf(" ");
		} // 2 and 3 row has space in between