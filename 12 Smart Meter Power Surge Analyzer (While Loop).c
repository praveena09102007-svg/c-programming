#include <stdio.h>

int main() {
    int N;
    int i = 0, usage;
    int maxUsage = 0;
    int surgeHours = 0;

    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &usage);

        if(i == 0) {
            maxUsage = usage;
        }

        if(usage > maxUsage) {
            maxUsage = usage;
        }

        if(usage > 5) {
            surgeHours++;
        }

        i++;
    }

    printf("Max Usage: %d\n", maxUsage);
    printf("Surge Hours: %d\n", surgeHours);

    return 0;
}