

#include <stdio.h>

int main()
{  
    int n,i,j,count=0,isprime;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        
        isprime = 1;
        for(j=2;j<=i/2;j++){
            if(i % j == 0){
                isprime = 0;
                break;
            }
        }
        if(isprime == 1){
            count++;
        }
          
    }
    printf("%d",count);

    return 0;
}