
#include <stdio.h>
#include <math.h>

int main()
{
    int N, i;
    int usage;
    int totalData = 0;
    int highusagedays = 0;
    
    scanf("%d",&N);
    for(i = 0; i < N; i++){
        scanf("%d",&usage);
        totalData += usage;
        if(usage > 2){
            highusagedays++;
        }
    }
    
    printf("Total Data: %d\n",totalData);
    printf("high usage days: %d\n",highusagedays);

    return 0;
}