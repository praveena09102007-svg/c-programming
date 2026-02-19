
#include <stdio.h>

int main()
{
    int  N,units;
    int totalunits = 0,spikeHours = 0;
    
    scanf("%d",&N);
    
    for(int i =0;i< N;i++)
    {
        scanf("%d",&units);
        totalunits += units;
    
    
        if(units >5){
           spikeHours++;
        }

    }
    
        
        
    printf("Total Units: %d\n", totalunits);
    printf("Spike Hours: %d\n", spikeHours);

    
    
    return 0;
}