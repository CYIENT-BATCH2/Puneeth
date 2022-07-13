// HOW TO SET A BIT
//Set bit is nothing but set the particular bit which has given,, using bitwise OR we can perform the set bit operation
#include <stdio.h>

int main() {
    int num,res;
    int bit;
    printf("Enter the number and which bit has to set: \n");
    scanf("%x %d", &num, &bit);
    printf("the bit is %d\n", bit);
    printf("Before set bit ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (num >> i) & 01);
    }
    res = num | (01 << bit);
    printf("\nAfter set bit: ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (res >> i) & 01);
    }
    
    
    return 0;
}
