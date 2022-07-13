#include<stdio.h>
int main()
#define PIE 3.142
{
    int num;
    int rev = 0;
    printf("Enter the number from user: ");
    scanf("%d", &num);
    while(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("The reversed number is %d", rev);
}

// reverse number second logic
#include<stdio.h>
int main()
#define PIE 3.142
{
    int num;
    int rev = 0;
    printf("Enter the number from user: ");
    scanf("%d", &num);
    if(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }if(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }if(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }if(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }if(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
  
    
    printf("The reversed number is %d", rev);
    
   
}
