#include <stdio.h>

int main() {
    int dataPack, N;
    int i = 0, usage;
    int exhaustedDay = -1;
    int overused = 0;

    scanf("%d", &dataPack);
    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &usage);

        dataPack = dataPack - usage;

        if(dataPack <= 0 && exhaustedDay == -1) {
            exhaustedDay = i + 1;

            if(dataPack < 0) {
                overused = -dataPack;
            }

            break;
        }

        i++;
    }

    if(exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overused);
    }

    return 0;
}