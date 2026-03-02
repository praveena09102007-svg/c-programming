#include <stdio.h>

int main() {
    int i, j;
    int n = 5;         
    int total = 10;     
   
    for(i = 1; i <= n; i++) {

        for(j = 1; j <= total; j++) {

            if(j <= n - i + 1)
                printf("* ");
            else if(j > n + i - 1)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    
    for(i = 1; i <= n; i++) {

        for(j = 1; j <= total; j++) {

            if(j <= i)
                printf("* ");
            else if(j > total - i)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}