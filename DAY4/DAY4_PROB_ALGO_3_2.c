//FINDOUT THE VALUE FOR i,j, K USING LOGICAL OPERATION
#include <stdio.h>
int main()
{
    int i=10,j=0,k;
    
    k=i&&(j=20);   //i=?,j=?,k=?
    printf("i, j, k values for k=i&&(j=20) is %d %d %d\n", i, j, k);
    k=i||(j=20);//i=?,j=?,k=?
    printf("i, j, k values for k=i||(j=20) is %d %d %d\n", i, j, k);
    return 0;
}
