// GIVEN NUMBER IS POWER OF 2 OR NOT
#include <stdio.h>

int main() {
    int num;
    printf("Please enter the number: \n");
    scanf("%d", &num);
    if(num && ((num & (num -1)) == 0))
    {
        printf("%d is a POWER of 2\n",num);
    }
    else
    {
        printf("%d is not a power of 2\n", num);
    }
}
