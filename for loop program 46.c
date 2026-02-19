
#include <stdio.h>

int main()
{
    int capacity, N;
    int item,overflowDays = 0;
    
    scanf("%d",&capacity);
    scanf("%d",&N);
    

    
    for( int i =0;i< N;i++)
    {
        scanf("%d",&item);
        capacity -= item;
    
    
        if(capacity < 0 && capacity+item >=0){
           overflowDays++;
        }

    }
    
        
        
    printf("Remaining capacity: %d\n", capacity);
    printf("overflow Days: %d\n", overflowDays);

    
    
    return 0;
}