
/*Convert binary value 00010001 to hex value
#include<stdio.h>
int main()
{
    long int binaryval, hexaval = 0, i = 1, rem;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binaryval);
    while (binaryval != 0)
    {
        rem = binaryval % 10;
        hexaval = hexaval + rem * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexaval);
    return 0;
}
*/
/*Convert 0xFF to binary value
#include<stdio.h>
int main()
{
    char num = 0xFF;
    char iter = 8;
    printf("The binary value of 0xFF is: ");
    loop:
    if(--iter)
    {
        printf("%d ", (num >> iter) & 1);
        goto loop;
    }
}*/

/*Convert 0xAA to decimal and to binary

#include<stdio.h>
int main()
{
    int num = 0xAA;
    int iter = 8;
    printf("The binary value of 0xAA is: ");
    loop:
    if(--iter)
    {
        printf("%d ", (num >> iter) & 1);
        goto loop;
    }
    printf("\nThe Decimal value of hexa value 0xAA is : %x", num);
}*/

//Convert 01010101 to decimal and to hex

#include<stdio.h>
int main()
{
    long int binaryval, hexaval = 0, i = 1, rem;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binaryval);
    while (binaryval != 0)
    {
        rem = binaryval % 10;
        hexaval = hexaval + rem * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value: %lX\n", hexaval);
    printf("Equivalent decimal value: %d\n", hexaval);
 
    return 0;
}
