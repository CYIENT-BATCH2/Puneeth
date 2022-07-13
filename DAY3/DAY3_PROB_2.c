//Write a program to calculate the sum of the first and the second last digit of a 5-digit number entered from the keyboard.
#include<stdio.h>
int main()
{
    int number, rem = 0, rev =0;
    printf("Please enter the number:\n");
    scanf("%d", &number);
    int temp = number;
    char ch1, ch2;
    if(number > 0)
    {
     number = number / 10;
     rem = number % 10;
     ch1 = rem;
    }
    loop:
    if(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
        goto loop;
    }
    ch2 = rev % 10;
    
    printf("the sum is  the %d", ch1 + ch2);
    
}
