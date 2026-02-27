#include <stdio.h>

int main() {
    int atmCash, N;
    int i = 0, withdrawal;
    int success = 0;

    scanf("%d", &atmCash);
    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &withdrawal);

        if(atmCash >= withdrawal) {
            atmCash = atmCash - withdrawal;
            success++;
        } else {
            break;
        }

        i++;
    }

    printf("Successful Withdrawals: %d\n", success);
    printf("Remaining Cash: %d\n", atmCash);

    return 0;
}