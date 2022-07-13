// A message ID is required to send data via CAN communication between ECU’s. Accept a random 2-digit message ID from the user to send data. Keep in mind that the given ECU only accepts binary form of the message ID. Write a program to convert the 2-digit ID to binary form.  
#include <stdio.h>

int main() {
    // Write C code here
    int id;
    scanf("%d",&id);
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", (id >> i) & 1);
    }
    
    return 0;
}
