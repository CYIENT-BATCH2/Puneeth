/*
Name : Puneeth G S
Date : 18/07/2022
Write program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if bits CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in register “ADCON0”
Input : Please Enter the 1byte value for CMCON and ADCONO: 0xFA 0x1C
output :
Binary Representation of the CMCON value is the : 1 1 1 1 1 0 1 0 
Binary Representation of the ADCONO value is the : 0 0 0 1 1 1 0 0 
Binary Representation of the CMCON value after the clear given bits : 1 1 1 1 0 0 0 0

Algorithm 
1.Start
2.Declare the variables 
3.Read the input from the user 
4.depend upon the ADCONO bits value have to perform the Clear bits of CMCON 
5.Display the value 
6.Stop
*/


#include <stdio.h>
int main() {
    char CMCON, ADCONO,res; //Varaible declaration 
    //read the inputs from the user
    printf("Please Enter the 1byte value for CMCON and ADCONO: ");
    scanf("%x%x", &CMCON, &ADCONO);
    printf("Binary Representation of the CMCON value is the : ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (CMCON >> i) & 1);
    }
     printf("\nBinary Representation of the ADCONO value is the : ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (ADCONO >> i) & 1);
    }
    //logic to get particular bits is 0x07
    res = (ADCONO & 0x3c);
    res = res >> 2;
    if(res == 0x07)
    {
       CMCON = (CMCON & 0xf0); 
       printf("\nBinary Representation of the CMCON value after the clear given bits : ");
      for(int i = 7; i >= 0; i--)
     {
        printf("%d ", (CMCON >> i) & 1);
     }
    }
    else
    {
        printf("\nThe bits CHS3, CHS2, CHS1, CHS0 bits of register ADCON0 is not 0x07");
    }
}
