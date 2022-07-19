/*
NAME : PUNEETH G S
DATE : 19/9/2022
Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.
Input : Enter the HEXA value for SSPSTAT Register: 0xab
Output : Binary representation of Value of ab SSPSTAT Register : 1 0 1 0 1 0 1 1 
Binary representation of Value of SSPSTAT Register after cleared the CKE , P, S: 1 0 1 0 0 0 1 1 

Algorithm 

1.Start
2.Declare the variable
3.Read the input from the user
4.Print the binary represenataion of the input value 
5.Using the bitwise operator perform the cleared the bits
6.Print the binary form value after the cleared the particular bits 
7.Stop
*/
#include <stdio.h> //Header file
int main() //Main function starts from here
{
    char SSPSTAT; //Variable declaration
    //Read the input from the user
    printf("Enter the HEXA value for SSPSTAT Register: ");
    scanf("%x",&SSPSTAT);
    // printing the input value in the binary form
    printf("Binary representation of Value of  SSPSTAT Register : ");
    for(int i = 7;i >= 0; i--)
    {
        printf("%d ", (SSPSTAT >> i) & 1);
    }
    SSPSTAT = SSPSTAT & 0XA7; //using this logic make cleared bits of the given bits 
    printf("\nBinary representation of Value of SSPSTAT Register after cleared the CKE , P, S: ");
    for(int i = 7;i >= 0; i--)
    {
        printf("%d ", (SSPSTAT >> i) & 1);
    }
    return 0;
} 

------------------------------------------------------------------------------------------------------------------------------------------------------
/*Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55
Input : Enter the HEXA value for SSPSTAT Register: 0x55
output : Binary representation of Value of 55 SSPSTAT Register : 0 1 0 1 0 1 0 1 
The value of bit BF in SSPSTAT register is : 1
The value of bit UA in SSPSTAT register is : 0
The value of bit SMP in SSPSTAT register is : 0
*/

#include <stdio.h> //Header file
int main() //Main files start from here 
{
    int SSPSTAT, BF = 0, UA = 0, SMP = 0;  //required variables declaration
    //Read the input from the user to the register 
    printf("Enter the HEXA value for SSPSTAT Register: ");
    scanf("%x",&SSPSTAT);
    //Printing the input value in the form of binary
    printf("Binary representation of Value of %x SSPSTAT Register : ", SSPSTAT);
    for(int i = 7;i >= 0; i--)
    {
        printf("%d ", (SSPSTAT >> i) & 1);
    }
    if(SSPSTAT == 0x55) //using the if condition checking the register value is equal to the 0x55
    {
        //below logic it used to get status of asked bits
        BF = (SSPSTAT & ( 1 << 0)) >> 0;
        printf("\nThe value of bit BF in SSPSTAT register is : %d", BF);
        UA = (SSPSTAT & ( 1 << 1)) >> 1;
        printf("\nThe value of bit UA in SSPSTAT register is : %d", UA);
        SMP = (SSPSTAT & ( 1 << 7)) >> 7;
        printf("\nThe value of bit SMP in SSPSTAT register is : %d", SMP);
    }
    else //if condition fails below statement will execute
    {
        printf("\nThe value of SSPSTAT REGISTER IS NOT EQUAL TO 0X55");
    }
    return 0;
}


