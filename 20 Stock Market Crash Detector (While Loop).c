#include <stdio.h>

int main() {
    int N;
    int i = 1;
    int prev, current;
    int consecutiveDrops = 0;
    int totalDrops = 0;
    int crashDay = -1;

    scanf("%d", &N);

    scanf("%d", &prev);

    while(i < N) {
        scanf("%d", &current);

        if(current < prev) {
            consecutiveDrops++;
            totalDrops++;

            if(consecutiveDrops == 3 && crashDay == -1) {
                crashDay = i + 1;
            }
        } else {
            consecutiveDrops = 0;
        }

        prev = current;
        i++;
    }

    if(crashDay == -1)
        printf("Crash Day: Not Detected\n");
    else
        printf("Crash Day: %d\n", crashDay);

    printf("Total Drops: %d\n", totalDrops);

    return 0;
}