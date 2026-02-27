#include <stdio.h>

int main() {
    int maxCapacity, N;
    int i = 0, patients;
    int treated = 0, rejected = 0;

    scanf("%d", &maxCapacity);
    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &patients);

        if(treated + patients <= maxCapacity) {
            treated = treated + patients;
        } else {
            rejected = rejected + (treated + patients - maxCapacity);
            treated = maxCapacity;
        }

        i++;
    }

    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d\n", rejected);

    return 0;
}