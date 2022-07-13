/*
Write program to check given i/p by user is alphabet or not alphabet using conditional operator
Algorithm
1.Start
2.Declare the varaibles
3.Read the alphabet character from the user
4.check with alphaa character with asciii value 
5.print the if entered character is alpha or not
6.stop
*/


#include <stdio.h>
int main()
{
    char ch;
    printf("Please enter the Alphabet\n");
    scanf("%c", &ch);
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("%c is a Alphabet\n", ch);
    }
    else
    {
        printf("%c is not a Alphabet\n", ch);
    }
}
