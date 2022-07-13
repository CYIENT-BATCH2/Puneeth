#include<stdio.h>
int main()
#define PIE 3.142
{
    float r,area;
    printf("Enter the radius from the user:");
    scanf("%f", &r);
    area = (PIE * r *r);
    printf("The area to be covered is %f", area);
    return 0;
}
