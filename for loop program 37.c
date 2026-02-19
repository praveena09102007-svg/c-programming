#include <stdio.h>

int main()
{
    int n,price;
    int highest = 0;
    int highDays = 0;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&price);
        if(price>highest)
        {
            highest = price;
        }
        if(price>100){
            highDays++;
        }
    
    }
    printf("highest price:%d\n",highest);
    printf("high price Days:%d\n",highDays);

    return 0;
}