#include <stdio.h>

int main() {
    int maxWeight, N;
    int i = 0, weight;
    int totalWeight = 0;
    int peopleEntered = 0;
    int overload = 0;

    scanf("%d", &maxWeight);
    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &weight);

        if(totalWeight + weight <= maxWeight) {
            totalWeight = totalWeight + weight;
            peopleEntered++;
        } else {
            overload = 1;
            break;
        }

        i++;
    }

    printf("People Entered: %d\n", peopleEntered);

    if(overload == 1)
        printf("Overload Status: Yes\n");
    else
        printf("Overload Status: No\n");

    return 0;
}