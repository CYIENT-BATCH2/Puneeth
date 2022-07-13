//Right shift the value 0xFE by 3 bits and print the value
#include<stdio.h>
int main()
{
    int num = 0xFE, result = 0;
    result = num >> 3;
    printf("Right shift the value %X by 3 bits  is %X", num, result);
}
