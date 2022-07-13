/*Increment and Decrement 
int i=10,j=50,k

1)k=++i+j++//i=?,j=?,k=?

2)k=i++-++j;//i=?,j=?,k=?

3)k=--i+j++ * i++ -j--; //i=?,j=?,k=?

4)k=(i--+ j++);//i=?,j=?,k=?*/

#include<stdio.h>
int main()
{
    int i=10,j=50,k;
    k=++i+j++;      //i=?,j=?,k=?
    printf("k value of k=++i+j++ is : %d\n", k);
    k=i++-++j;      //i=?,j=?,k=?
    printf("k value of k=i++-++j is : %d\n", k);
    k=--i+j++ * i++ -j--; //i=?,j=?,k=?
    printf("k value of k=--i+j++ * i++ -j-- is : %d\n", k);
    k=(i--+ j++);//i=?,j=?,k=?
    printf("k value of k=(i--+ j++) is : %d\n", k);
    return 0;
}
