#include<stdio.h>

int main() {
    int n,i,s,j;

    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        for(s=0;s<n-i;s++)
            printf(" ");

        for(j=0;j<i*2-1;j++)
            printf("*");

        printf("\n");
    }

    return 0;
}