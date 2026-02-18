
#include <stdio.h>
#include <math.h>

int main()
{
    int baterypercent,N;
    int drain, totalDrain=0;
    scanf("%d",&baterypercent);
    scanf("%d",&N);
   for(int i = 0;i < N; i++){
       scanf("%d", &drain);
       totalDrain += drain;
   }
    baterypercent  -= totalDrain;
    if(baterypercent < 0)
       baterypercent = 0;
    printf("Remaining Battery : %d %%",baterypercent);
    
    return 0;
}
