/*(B)RELATIONAL OPERATOR USING THIS OPERATOR HAVE TO FIND Z VALUE

x=10,y=20,z

1)z= x<y;

2)z= x>y;

3)z=x<=y;

4)z=(x*x-y)>(y*y-x)

5)z=(x*x*x)<(y*x*x)

6)z=((x*y)!=(y*x))

7)z=((x*y)==(y*x))*/
#include<stdio.h>
int main()
{
    int  x=10,y=20,z;
    z= x<y;
    printf("z value of z= x<y is  %d\n", z);
    z= x>y;
    printf("z value of z= x>y is  %d\n", z);
    z=x<=y;
    printf("z value of z=x<=y %d\n", z);
    z=(x*x-y)>(y*y-x);
    printf("z value of z=(x*x-y)>(y*y-x) is %d\n", z);
    z=(x*x*x)<(y*x*x);
    printf("z value of z=(x*x*x)<(y*x*x) is %d\n", z);
    z=((x*y)!=(y*x));
    printf("z value of z=((x*y)!=(y*x)) is %d\n", z);
    z=((x*y)==(y*x));
    printf("z value of z=((x*y)==(y*x)) is %d\n", z);
    return 0;
}
