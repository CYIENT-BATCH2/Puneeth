//Consider the phone number of a person as user input and find the sum of its digits. 

#include<stdio.h>
int main()
{
    int number;
    int sum = 0;
    printf("Please enter the mobile number: \n");
    scanf("%d", &number);
    loop:
    if(number > 0)
    {
        sum = sum  + (number % 10) ;
        number = number / 10;
        goto loop;
    }
    printf("the value of sum is  %d\n", sum);
    return 0;
}
