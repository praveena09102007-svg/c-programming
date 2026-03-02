#include <stdio.h>

int main() {
    int fuel, N, burn;
    int i = 0;
    int emergencyStage = -1;
    int wastedFuel = 0;

    scanf("%d", &fuel);
    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &burn);

        fuel -= burn;

        if(fuel < 0 && emergencyStage == -1) {
            emergencyStage = i + 1;
            wastedFuel = -fuel;
        }

        i++;
    }

    if(emergencyStage == -1)
        printf("Emergency Stage: Not Occurred\n");
    else
        printf("Emergency Stage: %d\n", emergencyStage);

    printf("Fuel Wasted: %d", wastedFuel);

    return 0;
}