
#include <stdio.h>
#include <math.h>

int main()
{
    int N, i;
    int loss;
    int totalloss = 0;
    int highLossDays = 0;
    scanf("%d",&N);
    
   for(int i = 0; i< N; i++){
       scanf("%d", &loss);
       totalloss += loss;
       
       if(loss > 100){
           highLossDays++;
       }
   }
   printf("Total Loss: %d\n", totalloss);
   printf("High Loss Days: %d\n",highLossDays);
    
    return 0;
}
