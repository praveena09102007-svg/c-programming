#include <stdio.h>

int main()
{
    int N, i;
    int patients;
    int totalPatients = 0;
    int overcrowdedDays = 0;
    
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&patients);
        totalPatients+=patients;
        if(patients > 100)
        {
            overcrowdedDays++;
        }
    }
    
    printf("total patients:%d\n",totalPatients);
    printf("over crowded Days:%d\n",overcrowdedDays);

    return 0;
}