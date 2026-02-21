#include <stdio.h>
int main(){
    int fuel,n,i=0,x,trips=0;
    scanf("%d%d",&fuel,&n);
    while(i<n){
        scanf("%d",&x);
        if(fuel<x) break;
        fuel-=x;
        trips++;
        i++;
    }
    printf("Completed Trips: %d\n",trips);
    printf("Remaining Fuel: %d",fuel);
}