#include <stdio.h>

int main() {
    int i, j, n = 5;

    // Upper Part
    for(i = 1; i <= n; i++) {

        // Left Stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        // Middle Spaces
        for(j = 1; j <= 2*(n - i); j++) {
            printf(" ");
        }

        // Right Stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower Part
    for(i = n - 1; i >= 1; i--) {

        // Left Stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        // Middle Spaces
        for(j = 1; j <= 2*(n - i); j++) {
            printf(" ");
        }

        // Right Stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}