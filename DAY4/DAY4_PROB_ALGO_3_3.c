/* int i=0,j=0,k=30,l; FINDOUT THE VALUE FOR i,j, K USING LOGICAL OPERATION

6)l=i||(j=20)&&k; //i=?,j=?,k=?,l=?

*/
#include <stdio.h>
int main()
{
    int i=0,j=0,k=30,l;
    
    l=i||(j=20)&&k; //i=?,j=?,k=?,l=?
    printf("i, j, k , lvalues for l=i||(j=20)&&k  is %d %d %d %d\n", i, j, k, l);
    return 0;
}
