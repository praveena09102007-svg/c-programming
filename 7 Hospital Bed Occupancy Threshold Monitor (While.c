#include <stdio.h>
int main(){
    int cap,n,i=0,x,occ=0,crit=0;
    scanf("%d%d",&cap,&n);
    while(i<n){
        scanf("%d",&x);
        occ+=x;
        if(occ > (cap*90)/100) crit++;
        i++;
    }
    printf("Final Occupied Beds: %d\n",occ);
    printf("Critical Hours: %d",crit);
}