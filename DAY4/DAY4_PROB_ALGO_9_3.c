// HOW TO COMPLIMENT A BIT 
//compliment or toggle  a bit is nothing but toggle 1 to 0 and 1 to 0 to the particular bit which has given,, using bitwise X-OR we can perform the toggle a bit operation
#include <stdio.h>

int main() {
    int num,res;
    int bit;
    printf("Enter the number and which bit has to set: \n");
    scanf("%x %d", &num, &bit);
    printf("Before set bit ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (num >> i) & 01);
    }
    res = num ^ (01 << bit);
    printf("\nAfter set bit: ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (res >> i) & 01);
    }
    
    
    return 0;
}
