#include <stdio.h>
int main()
{
    int num;
    int rev = 0;
    printf("Enter the palindrome number : ");
    scanf("%d",&num);
    int num2 = num;
    loop:if(num > 0)
    {
        rev = rev * 10 + num %10;
        num = num / 10;
        if(num > 0)
        {
            goto loop;
        }
    }
    if(rev == num2)
    {
        printf("%d is a palindrome number", num2);
    }
    else
    {
        printf("%d is not palindrome number", num2);
    }
}
