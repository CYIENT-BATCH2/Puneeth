// HOW TO CLEAR A BIT
//Clear a bit is nothing but clear 1 to 0 to the particular bit which has given,, using bitwise AND we can perform the clear a bit operation
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
    res = num & ~(01 << bit);
    printf("\nAfter set bit: ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (res >> i) & 01);
    }
    
    
    return 0;
}
