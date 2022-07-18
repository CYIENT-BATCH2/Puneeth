/*Write a code to swap even bits with odd bits in unsigned long variable(uint64).
Example: bit 0 with bit 1; bit 2 with bit 3; bit 4 with bit

algorithm 
1.Start
2.Declare the variables
3.read the input from the user as a input
4.Before swapping even with odd bit display the num in the form of binary representation
5.using the bitwise operation & and shift operation have to do solve
6.after swapping display the binary represenation 
7.stop

Input : 
Enter the number: 0xaf
The binary representation of number is :
0000000000000000000000000000000000000000000000000000000010101111
Output:
The binary representation of number after swapping is :
0000000000000000000000000000000000000000000000000000000001011111

Name : Puneeth G S
Date : 18/7/2022
*/
#include <stdio.h>
int main() {
    unsigned long long int num, var1, var2,res; //variables declaration
    //Read the inputs from the user
    printf("Enter the number: ");  
    scanf("%llx",&num);
    printf("The binary representation of number is :\n");
    for(int i=63; i>=0; i--)
    {
        printf("%lld",(num >> i) & 1);
    }
    printf("\n");
    //Using the bitwise operation swapping the even with odd values viceversa
    var1 = ((num & 0xAAAAAAAAAAAAAAAA) >> 1);
    var2 = ((num & 0x5555555555555555) << 1);
    res = (var1 | var2);
    Display the binary form value after the swapping 
    printf("The binary representation of number after swapping even with odd bit is :\n");
    for(int i=63; i>=0; i--)
    {
        printf("%lld",((res>>i) & 1));
    }
    return 0;
}
