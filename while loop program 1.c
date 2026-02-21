#include <stdio.h>

int main() {
    int N, i = 0;
    int noise;
    int violations = 0;
    int currentStreak = 0;
    int maxStreak = 0;

    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &noise);

        if (noise > 70) {
            violations++;
            currentStreak++;

            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }

        i++;
    }

    printf("Noise Violations: %d\n", violations);
    printf("Longest Violation Streak: %d\n", maxStreak);

    return 0;
}