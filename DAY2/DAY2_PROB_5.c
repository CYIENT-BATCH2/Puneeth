//A message is encoded in the form of numbers and sent to you. Write a program to decode the message. (HINT: A=1, B=2, … so on) 

#include<stdio.h>
int main()
{
    int num, rem = 0, res = 0, rev = 0;
    printf("Please enter the mobile number: \n");
    scanf("%d", &num);
    loop1:
    if(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num /10;
        goto loop1;
    }
    loop:
    if(rev > 0)
    {
        rem = (rev % 10);
        res = rem + 64;
        printf("%c",res);
        rev = rev / 10;
        goto loop;
    }
   
}

// second method to decode message
#include<stdio.h>
int main()
{
    int num, res = 0;
    printf("Please enter the number: \n");
    scanf("%d", &num);
    res = num + 64;
    printf("%c", res);
}

