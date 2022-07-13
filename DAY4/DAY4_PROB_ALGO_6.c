/*Shift operator
int i=10,j=2,k
1)k=i<<j;
2)k=i>>j;
3)k=(i&&j)<<j;
4)k=(i||j)>>j;
5)k=(i&j)<<i;
6)k=(i||j&&i);*/

#include<stdio.h>
int main()
{
    int i=10,j=2,k;
    k=i<<j;
    printf("k value of k=i<<j is : %d\n", k);
    k=i>>j;
    printf("k value of k=i>>j is : %d\n", k);
    k=(i&&j)<<j;
    printf("k value of k=(i&&j)<<j is : %d\n", k);
    k=(i||j)>>j;
    printf("k value of k=(i||j)>>j is : %d\n", k);
    k=(i&j)<<i;
    printf("k value of  k=(i&j)<<i is : %d\n", k);
    k=(i||j&&i);
    printf("k value of k=(i||j&&i) is : %d\n", k);
    return 0;
}
