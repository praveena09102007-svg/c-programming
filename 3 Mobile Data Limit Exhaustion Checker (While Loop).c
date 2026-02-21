#include <stdio.h>

int main() {
    int totalData, N;
    int i = 0;
    int usage;
    int daysUsed = 0;

    scanf("%d", &totalData);
    scanf("%d", &N);

    while (i < N && totalData > 0) {
        scanf("%d", &usage);

        totalData = totalData - usage;

        if (totalData >= 0) {
            daysUsed++;
        } else {
            totalData = 0;
        }

        i++;
    }

    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);

    return 0;
}