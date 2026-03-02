#include <stdio.h>

int main() {
    int N, count, i = 0;
    int congestionMinutes = 0;
    int currentStreak = 0, longestStreak = 0;

    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &count);

        if(count > 20) {
            congestionMinutes++;
            currentStreak++;

            if(currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }

        i++;
    }

    printf("Congestion Minutes: %d\n", congestionMinutes);
    printf("Longest Congestion Streak: %d", longestStreak);

    return 0;
}