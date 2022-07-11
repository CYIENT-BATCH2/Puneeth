//Consider a character input from a user and print if it is a vowel or consonant. 
// Online C compiler to run C program online
#include <stdio.h>

int main() {
     char ch;
     printf("Read the character input from user:");
     scanf("%c", &ch);
     if((ch >= 65 && ch <= 90) || 97 && ch <= 122)
     {
     if(ch == 'a' || ch == 'e'|| ch == 'i'|| ch == 'o'  || ch == 'u' || ch == 'A' || ch == 'E'|| ch == 'I'|| ch == 'O'  || ch == 'U') 
     {
            printf("%c is a vowel\n",ch);
     }
     else
     {
         printf("%c is a consonant\n",ch);
     }
     }
     else
     {
         printf("Please Enter only alphabate");
     }
    return 0;
}
