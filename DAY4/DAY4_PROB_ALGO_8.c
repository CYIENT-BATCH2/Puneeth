/*BIGGEST OF TWO NUMBERS USING CONDITIONAL OPERATOR
1.Start
2.Declare the variables
3.Read the inputs from the users as a input
4.check the condition using if(num1 > num2)
5.print the largest number
6.Stop
*/

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Please enter the two numbers:\n");
    scanf("%d%d",&num1, &num2);
    if(num1 > num2)
    {
        printf("The %d is the largest number\n", num1);
    }
    else
    {
        printf("The %d is the largest number\n", num2);
    }
}
