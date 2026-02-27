#include <stdio.h>

int main() {
    int walletBalance, N;
    int i = 0, purchase;
    int success = 0;

    scanf("%d", &walletBalance);
    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &purchase);

        if(walletBalance >= purchase) {
            walletBalance = walletBalance - purchase;
            success++;
        } else {
            break;
        }

        i++;
    }

    printf("Successful Purchases: %d\n", success);
    printf("Final Balance: %d\n", walletBalance);

    return 0;
}