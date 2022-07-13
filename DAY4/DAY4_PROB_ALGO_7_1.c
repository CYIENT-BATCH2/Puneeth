/*SWAPPING OF TWO NUMBERS WITH USING THIRD VARIABLE
1.START
2.READ THE TWO NUMBERS INPUT FROM USER AND IT INTO THE TWO VARIABLES
3.DO SWAPPING USING THE THRID VARIABLE
4.PRINT THE SWAPPED NUMBERS
5.STOP
*/

#include<stdio.h>
int main()
{
    int num1 = 10, num2 = 20, temp;
    printf("Before swapping values are\nnum1 is %d\nnum2 is %d\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping values are\nnum1 is %d\nnum2 is %d\n", num1, num2);
}
