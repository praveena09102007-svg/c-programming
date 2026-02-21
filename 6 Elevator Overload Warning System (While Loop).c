#include <stdio.h>
int main(){
    int max,n,i=0,w,total=0,count=0,over=0;
    scanf("%d%d",&max,&n);
    while(i<n){
        scanf("%d",&w);
        if(total+w>max){ over=1; break; }
        total+=w;
        count++;
        i++;
    }
    printf("Passengers Allowed: %d\n",count);
    if(over) printf("Overload: Yes");
    else printf("Overload: No");
}