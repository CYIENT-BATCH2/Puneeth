/*
NAME = Puneeth G S
DATE = 19/07/2022
    Problem =  Write a function to store "G_Eng_EngineTemperature_uchar" and "G_Eng_EngineRpm_uint" into " G_Msg_EngineInformation_Byte[5u]" as shown below.unsigned char G_Eng_EngineTemperature_uchar = 50u ;
        unsigned int G_Eng_EngineRpm_uint = 1000u;
        unsigned char G_Msg_EngineInformation_Byte[5u];
        
    ALGORITHM
    1.Start
    2.Declare the variables and initialize the values
    3.print the rpm value in the binary form 
    4.according to the given table in the question store the values of the particular bits to the array using the bitwise operation.
    5.stop
/*-------------------------------Method 1------------------------------*/
#include <stdio.h>                                                                  //Header file
int main() { 
    //variable declaration and initialization values 
    unsigned char G_Eng_EngineTemperature_uchar = 50u;
    unsigned int G_Eng_EngineRpm_uint = 1000u;
    unsigned char G_Msg_EngineInformation_Byte[5u];
    //printing the binary value engine temperature 
    printf("The binary representation of G_Eng_EngineRpm_uint value : ");
    for(int i = 31 ; i >= 0; i--)
    {
        printf("%d ", (G_Eng_EngineRpm_uint >> i) & 1);
    } 
    //using the bitwise operator storing the array elements accordingly bits value given in the question 
    G_Msg_EngineInformation_Byte[0] =  (G_Eng_EngineRpm_uint & ((16-1) << 9)) >> 9;
    G_Msg_EngineInformation_Byte[1] = (G_Eng_EngineRpm_uint & ((256-1) << 1)) >> 1;
    G_Msg_EngineInformation_Byte[2] = (G_Eng_EngineRpm_uint & 1) << 7;
    G_Msg_EngineInformation_Byte[3] = G_Eng_EngineTemperature_uchar;
    return 0;
}


/*--------------------------using function--------------------------------*/

#include <stdio.h>
void EngineInformation(unsigned char, unsigned int, unsigned char *);
int main() {
    unsigned char G_Eng_EngineTemperature_uchar = 50u;
    unsigned int G_Eng_EngineRpm_uint = 1000u;
    unsigned char G_Msg_EngineInformation_Byte[5u];
    printf("The binary representation of G_Eng_EngineRpm_uint value : ");
    for(int i = 31 ; i >= 0; i--)
    {
        printf("%d ", (G_Eng_EngineRpm_uint >> i) & 1);
    }
    EngineInformation(G_Eng_EngineTemperature_uchar,G_Eng_EngineRpm_uint,G_Msg_EngineInformation_Byte);
    printf("\nThe Elements values of an array after storing temp and rpm to the G_Msg_EngineInformation_Byte: ");
    for(int i = 0; i < 4; i++)
    {
        printf("%d ", G_Msg_EngineInformation_Byte[i]);
    }
    return 0;
}
void EngineInformation(unsigned char eng_temp, unsigned int eng_rpm, unsigned char eng_info[5])
{
    eng_info[0] =  (eng_rpm & ((16-1) << 9)) >> 9;
    eng_info[1] = (eng_rpm & ((256-1) << 1)) >> 1;
    eng_info[2] = (eng_rpm & 1) << 7;
    eng_info[3] = eng_temp;
}
