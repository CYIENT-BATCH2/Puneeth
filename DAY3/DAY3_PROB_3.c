//Write a program to reverse a 3-digit number which is entered from keyboard. 

#include<stdio.h>
int main()
{
    int num, rev = 0,temp;
    printf("Enter the number value:");
    scanf("%d", &num);
    temp = num;
    loop:
    if(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
        goto loop;
    }
    printf("The number %d is reversed to %d", temp, rev);
}
