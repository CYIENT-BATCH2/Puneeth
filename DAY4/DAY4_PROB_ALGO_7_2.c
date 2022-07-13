/*SWAPPING OF TWO NUMBERS WITHOUT USING THIRD VARIABLE
1.Start
2.Decalre the variables along with the suitabe datatypes
3.Read the two numbers from the user
4.Swap the two numbers without using thrid variable
5.Print the swapped numbers
6.Stop
*/

#include<stdio.h>
int main()
{
    int num1 = 10, num2 = 20;
    printf("Before swapping values are\nnum1 is %d\nnum2 is %d\n", num1, num2);
    num2 = num1 + num2;
    num1 = num2 - num1;
    num2 = num2 - num1;
    printf("After swapping values are\nnum1 is %d\nnum2 is %d\n", num1, num2);
}
