
#include <stdio.h>
#include <math.h>

int main()
{
    int n,fare, total =0;
    scanf("%d",&n);
   for(int i = 1; i<= n; i++){
       scanf("%d", &fare);
       total = total + fare;
   }
    
    printf("Total Collection: $%d",total);
    
    return 0;
}
