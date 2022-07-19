/* 
Name : Puneeth G S
DATE : 19/07/2022
Problem - Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.
Algorithm 
1.Start 
2.Declare the variable
3.set the register bits TMROON and PSA bits to high using the bitwise operation
4.Print the binary representation to check if its set or not 
5.Stop

*/


/*#include <stdio.h> //Header file 
int main() {
    int TOCON; //variable declaration
    // Read the input from the user 
    printf("Enter the value for TMROON : ");
    scanf("%x", &TOCON);
    //printing the binary value to the input given value
    printf("Binary representation of TMROON Register value is: ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (TOCON>>i) & 1);
    }
    //using the below logic set the bit high for given input bits
    TOCON = TOCON | 1 << 3;
    TOCON = TOCON | 1 << 7;
    printf("\nBinary representation of TMROON Register value after SET to TMROON AND PSA: ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (TOCON >> i) & 1);
    }
    return 0;
}*/


/*II). Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3 */

#include <stdio.h> //Header file
int main() //main function starts from here 
{
    int TOCON,TOPS2, TOPS1, TOPS0; //variable declaration
    //reading the input from the user 
    printf("Enter the value for TMROON : ");
    scanf("%x", &TOCON);
    //printing the binary form value of the input value
    printf("Binary representation of TMROON Register value is: ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (TOCON>>i) & 1);
    }
    if(TOCON == 0xF3) //using the if condition checking the given value is equal to the register value
    {
        TOPS0 = (TOCON & 0x01) >> 0;
        printf("\nThe TOPSO Bit value is %d\n", TOPS0);
        TOPS1 = (TOCON & 0x02) >> 1;
        printf("The TOPS1 Bit value is %d\n", TOPS1);
        TOPS2 = (TOCON & 0x04) >> 2;
        printf("The TOPS2 Bit value is %d\n", TOPS2);
        
    }
    else
    {
        printf("The value of TOCON Register is not 0xF3");
    }
  return 0;
}
