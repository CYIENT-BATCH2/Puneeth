//Write program to calculate the age of a person based on year, month as i/p
#include<stdio.h>
int main()
{
    int year_of_birth, month_of_birth, age;
    int present_year, present_month, month;
    printf("Please enter year and month of birth:");
    scanf("%d/%d", &month_of_birth,&year_of_birth);
    printf("Please enter present year and month: ");
    scanf("%d/%d", &present_month,&present_year);
    month = present_month - month_of_birth;
    if(month < 0)
    month = month + 12;
    printf("The age of the person is %d years and %d months", (present_year - year_of_birth) - 1, month);
    return 0;
    
}
