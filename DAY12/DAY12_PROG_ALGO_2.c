/*
Name : Puneeth G S
Date : 25/07/2022
Find empty strings in an array of strings (Array of strings will be given as input to program) and print the position of array where empty string is present. And replace the empty string array element as “CYIENT”
Input : char string[8][15] = {"Puneeth","G S","joined","to","","organization","in","june-2022"};
Output : After the replaced the empty string  with cyient : 
         Puneeth G S joined to cyient organization in june-2022
Algorithm 
1.Start
2.Variable declaration
3.Initial the array of string with Empty string
4.using the while loop  performing the each iteration of string
5.using the strcmp function of the string.h file check the empty string 
6.using the strcpy function copy the "cyient" to the place of empty string 
7.print the array of string after the replacement 
8.Stop
*/

#include<stdio.h>   //stdio.h header file 
#include<string.h>  //string.h header file
int main()          //main function starts from here 
{
    int i = 0;      //variable declaration 
    char string[8][15] = {"Puneeth","G S","joined","to","","organization","in","june-2022"}; //given the input array string 
    while(i < 8) //using the while loop checking the each array string which has the empty 
    {
        if(! strcmp(string[i], ""))  //using the strcmp and strcpy function of string.h header file performing the given operation 
        {
            strcpy(string[i],"cyient");
            printf("The empty string is present is the array at %d position\n", i);
        }
        i++;
    }
    printf("After the replaced the empty string  with cyient : \n");
   for(int i = 0; i < 8; i++)
   {
       printf("%s ", string[i]);
   }
}

    
