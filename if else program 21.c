
#include <stdio.h>

int main()
{
    char h;
    int a,b;
    scanf("%d %c %d",&a,&h,&b);
    switch(h){
        case'+':
        printf("result=%d",a+b);
        break;
        case'-':
        printf("result=%d",a-b);
        break;
        case'*':
        printf("result=%d",a*b);
        break;
        case'/':
        printf("result=%d",a/b);
        break;
    default:
    

    printf("enter valid symbol");
    }

    return 0;
}