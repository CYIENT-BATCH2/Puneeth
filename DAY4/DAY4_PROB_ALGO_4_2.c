/* FIND K VALUE USING THE BITWISE OPERATION
int i=10,j=20,k=30;
k=i&&j&k
k=i&j|k&&i;
k=i||j&j;
k=i||j&(j&&k);*/

#include<stdio.h>
int main()
{
    int i=10,j=20,k=30;
    k=i&&j&k;
    printf("k value of k=i&&j&k is %d\n", k);
    k=i&j|k&&i;
    printf("k value of k=i&j|k&&iis %d\n", k);
    k=i||j&j;
    printf("k value of k=i||j&j is %d\n", k);
    k=i||j&(j&&k);
    printf("k value of k=i||j&(j&&k) is %d\n", k);
    return 0;
}
