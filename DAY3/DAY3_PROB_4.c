//Convert decimal number 204 to hex value, binary value and print the same

#include<stdio.h>
int main()
{
    int num = 204;
    printf("The hexa value of %d is %X \n", num, num);
    int iter = 8;
    printf("the hex value of %d is ", num);
    loop:
    if(iter-- != 0)
    {
        printf(" %d", num >> iter & 01);
        goto loop;
    }
}
