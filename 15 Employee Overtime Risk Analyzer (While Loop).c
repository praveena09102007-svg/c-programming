#include <stdio.h>

int main() {
    int N;
    int i = 0, hours;
    int totalOvertime = 0;
    int burnoutDays = 0;

    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &hours);

        totalOvertime = totalOvertime + hours;

        if(hours > 4) {
            burnoutDays++;
        }

        i++;
    }

    printf("Total Overtime: %d\n", totalOvertime);
    printf("Burnout Days: %d\n", burnoutDays);

    return 0;
}