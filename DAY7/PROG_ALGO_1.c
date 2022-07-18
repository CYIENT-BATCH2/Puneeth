/*Write a program to convert a data stream from Little Endian to Big Endian (you can take any 8 bit value or use 0b110101110)?

Name : Puneeth G S
Date : 18/07/2022

Algorithm 
1.Start
2.Declare the variable and initilaize the value
3.Using the function call the big function
4.Using the bitwise the logic operation 
5.Print the value 
6.Stop
*/

#include<stdio.h>
int big(unsigned long int); //Function Prototype
int main()
{
    //Declare the variable and initailize the value  
    unsigned long int num = 0x12345678, res = 0;
    printf("little Endian system number is  %x", num);
    res = big(num); //big function call
    printf("\nConvert the little to BIG Endian %x",res ); //
    
}
int big(unsigned long  int  x) //function definition 
{
    int num = 0; //variable declaration 
    num = num | ((x & 0x000000ff) << 24);
    num = num | ((x & 0x0000ff00) << 8);
    num = num | ((x & 0x00ff0000) >> 8);
    num = num | ((x & 0xff000000) >> 24);
    return num; //return the value 
}
