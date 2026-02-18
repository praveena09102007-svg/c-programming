
#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,units,total=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&units);
        total += units;
        
    }

        printf("Total Units: %d",total);
    
    
    return 0;
}
