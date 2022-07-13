// Online C compiler to run C program online special number or not
#include <stdio.h>

int main() {
    int num,result;
    printf("Read the input from user:");
    scanf("%d", &num);
    if((num % 11 <= 1) || (num % 11 - 1 == 0))
    {
       printf("%d is the special number\n",num);
    }
    else
    {
        printf("%d is not special number\n", num);
    }
    return 0;
}
