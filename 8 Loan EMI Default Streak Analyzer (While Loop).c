#include <stdio.h>
int main(){
    int n,i=0,x,c=0,m=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&x);
        if(x==0)
        {
            c++; if(c>m) m=c;
        }
        else c=0;
        i++;
    }
    printf("Longest Default Streak: %d",m);
}