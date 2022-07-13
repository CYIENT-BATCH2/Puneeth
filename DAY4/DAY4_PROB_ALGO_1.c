/*(A)ARITHMATICAL OPERATOR using this operator have o find k value 

x=30, y=20, z=10 FIND OUT THE VALUE FOR K

1)k = x + y * z / 4 % 2 - 1 ;

2)k= x% y+z*z;

3)k=  x*x-y/z;

4)k= x+y/z-y; 

5)y=x+y-(x=y); //y=?

6)y=x+y-x=y    //y=?
*/
#include <stdio.h>
int main()
{
int x=30, y=20, z=10, k;

    k = x + y * z / 4 % 2 - 1 ;
    printf("the k value is %d\n", k);
    k= x% y+z*z;
    printf("the k value is %d\n", k);
    k=  x*x-y/z;
    printf("the k value is %d\n", k);
    k= x+y/z-y; 
    printf("the k value is %d\n", k);
    y=x+y-(x=y); //y=?
    printf("the y value is %d\n", y);
    //y=x+y-x=y ;   //y=? error
    //printf("the y value is %d", y);
    return 0;
}
