/*  Realize a function which has 2 arguments and 1 return value. Argument 1 is Byte value, Argument 2 is bit position. Function has to flip the bit position (as per argument 2) in argument 1 byte value and return complete byte value.
Name : Puneeth G S
Date : 18/07/2022

Input : please enter the data and bit position: 0xFF 3
Output : 0xF7
Algorithm 
1.Start 
2.Declare the variable
3.Read the inputs from the user
4.using the function have to do logical operation
5.return the value from the flip function to main function
6.Print the return byte value
7.Stop

*/
#include <stdio.h>
int flip(int , int);
int main() 
{
   int data, bit_position,res = 0;
   printf("Please enter the data and bit position: ");
   scanf("%x%d", &data, &bit_position);
   res = flip(data, bit_position);
   printf("The Fliped value is : %x", res);
   return 0;
}

int flip(int value, int position)
{
    value = (value ^ (1 << position));
    return value;
}
