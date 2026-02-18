
#include <stdio.h>
#include <math.h>

int main()
{
    int salary,absentDays,finalSalary;
    scanf("%d",&salary);
    scanf("%d",&absentDays);
    finalSalary = salary-(absentDays * 100);
    printf("Final salary: $%d",finalSalary);
    
    
    
    
    return 0;
}
