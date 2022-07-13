/*POSITIVE OR NEGATIVE NUMBER USING CONDITIONAL OPERATOR
ALGORITHM
1.Start
2.Declare variables
3.Read the number from the user
4.Check the number is positive or not using the condition if(num < 0)
5.print the number
6.Stop
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Please enter a number\n");
    scanf("%d",&num);
    if(num >= 0)
    {
        printf("%d is a Positive number\n", num);
    }
    else
    {
        printf("%d is a Negative number\n", num);
    }
}
