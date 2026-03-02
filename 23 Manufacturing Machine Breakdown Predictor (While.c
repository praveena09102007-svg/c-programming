#include <stdio.h>

int main() {
    int N, vibration, i = 0;
    int unsafeCount = 0;
    int consecutiveUnsafe = 0;
    int breakdownPoint = -1;

    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &vibration);

        if(vibration > 70) {
            unsafeCount++;
            consecutiveUnsafe++;

            if(consecutiveUnsafe == 3 && breakdownPoint == -1) {
                breakdownPoint = i + 1;
            }
        } else {
            consecutiveUnsafe = 0;
        }

        i++;
    }

    if(breakdownPoint == -1)
        printf("Breakdown At Reading: Not Occurred\n");
    else
        printf("Breakdown At Reading: %d\n", breakdownPoint);

    printf("Unsafe Readings: %d", unsafeCount);

    return 0;
}