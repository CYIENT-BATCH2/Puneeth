/*
FINDOUT THE VALUE FOR i,j, K USING LOGICAL OPERATIONint i=10,j=20,k=0,l

7)l=i&&j||j&&k;

8)l=i||j&&i||k;
*/
#include <stdio.h>
int main()
{
    int i=10,j=20,k=0,l;
    l=i&&j||j&&k;
    printf("l values for l=i&&j||j&&k  is %d\n", l);
    return 0;
}
