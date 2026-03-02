#include <stdio.h>

int main() {
    int i, j, n = 4;   
    for(i = 0; i < 7; i++) {
        for(j = 0; j < 7; j++) {

            int top = i;
            int left = j;
            int bottom = 6 - i;
            int right = 6 - j;

            int min = top;

            if(left < min)
                min = left;
            if(bottom < min)
                min = bottom;
            if(right < min)
                min = right;

            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}