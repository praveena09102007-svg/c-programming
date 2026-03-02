#include <stdio.h>
int main() {
    int i, j;
    char start = 'E';

    for(i=0; i<5; i++) {

        for(j=0; j<=i; j++) {
            printf("%c ", start - i + j);
        }

        printf("\n");
    }

    return 0;
}