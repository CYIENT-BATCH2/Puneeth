//Write program to accept hex value as i/p and right shift bit value also as i/p and print the value after doing the hex right shift
#include<stdio.h>
int main()
{
    int num, shifts, result = 0;
    printf("Please enter the hexa number: \n");
    scanf("%x", &num);
    printf("please enter the number of shifts: \n");
    scanf("%d",&shifts);
    result = num >> shifts;
    printf("The hexa value of %x shifted by %d  =  %x", num, shifts, result);
}
