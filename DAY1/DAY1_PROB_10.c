// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int kg1, kg2, kg3, res;
    printf("Read the three persons weigth as inputs from the user: \n");
    scanf("%d%d%d", &kg1, &kg2, &kg3);
    res = kg1 > kg2 ? kg1 > kg3 ? kg1 : kg3 : kg2 > kg3 ? kg2 : kg3;
    printf("The heaviest among the 3 persons is %d\n", res);
    return 0;
}
