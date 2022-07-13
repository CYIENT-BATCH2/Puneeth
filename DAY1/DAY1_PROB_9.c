// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a , b, AND, OR, NOT;
    printf("Enter two inputs as digit 0 or 1: \n");
    scanf("%d%d", &a, &b);
    AND = a && b;
    printf("The logical output of AND for %d ,%d inputs is %d\n", a, b, AND);
    OR = a || b;
    printf("The logical output of OR for %d ,%d inputs is %d\n", a, b, OR);
    NOT = !a;
    printf("The logical output of NOT for %d inputs is %d\n", a, NOT);
    return 0;
}
