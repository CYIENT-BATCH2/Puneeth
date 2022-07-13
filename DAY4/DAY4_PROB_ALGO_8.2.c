/*EVEN AND ODD NUMBER USING CONDITIONAL OPERATOR
1.Start 
2.Declare the variables
3.Read the number input from the user
4.check the number with the modulo % operator find number is even or odd
5.print the number with respect to even or odd
6.Stop
*/


#include<stdio.h>
int main()
{
    int num;
    printf("Please enter a number\n");
    scanf("%d",&num);
    if(num % 2 == 0)
    {
        printf("%d is a EVEN number\n", num);
    }
    else
    {
        printf("%d is a ODD number\n", num);
    }
} 
