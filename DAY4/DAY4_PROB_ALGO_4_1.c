/* FIND K VALUE USING THE BIT WISE OPERATION 
int i=10,j=20,m=5,k;
1)k=i&j; //k=?
2)k=i|j;
3)k=i^j;
4)k=i&&j|m&&j;
5)k=i||j&m&&i;
6)k=i&j|j||m;*/

#include<stdio.h>
int main()
{

int i=10,j=20,m=5,k;

    k=i&j; //k=?
    printf("k value of k=i&j is %d\n", k);
    k=i|j;
    printf("k value of k=i|j is %d\n", k);
    k=i^j;
    printf("k value of k=i^j is %d\n", k);
    k=i&&j|m&&j;
    printf("k value of k=i&&j|m&&j is %d\n", k);
    k=i||j&m&&i;
    printf("k value of k=i||j&m&&i is %d\n", k);
    k=i&j|j||m;
    printf("k value of k=i&j|j||m is %d\n", k);
    return 0;
}
