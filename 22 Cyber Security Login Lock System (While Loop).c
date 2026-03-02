#include <stdio.h>

int main() {
    int N, status, i = 0;
    int consecutiveFail = 0;
    int totalFail = 0;
    int lockAttempt = -1;

    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &status);

        if(status == 0) {
            totalFail++;
            consecutiveFail++;

            if(consecutiveFail == 3 && lockAttempt == -1) {
                lockAttempt = i + 1;
            }
        } else {
            consecutiveFail = 0;
        }

        i++;
    }

    if(lockAttempt == -1)
        printf("Lock Triggered At Attempt: Not Locked\n");
    else
        printf("Lock Triggered At Attempt: %d\n", lockAttempt);

    printf("Total Failed Attempts: %d", totalFail);

    return 0;
}