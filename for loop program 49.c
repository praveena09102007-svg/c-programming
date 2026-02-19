
#include <stdio.h>

int main()
{
    int  N,calls;
    int totalcalls = 0,overloadHours = 0;
    
    scanf("%d",&N);
    
    for(int i =0;i< N;i++)
    {
        scanf("%d",&calls);
        totalcalls += calls;
    
    
        if(calls >40){
           overloadHours++;
        }

    }
    
        
        
    printf("Total calls: %d\n", totalcalls);
    printf("overload Hours: %d\n", overloadHours);

    
    
    return 0;
}