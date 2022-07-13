// Kishore bought ‘n’ number of lottery tickets. His lucky number is 3 so he wants to separate all the tickets that have the number 3 in them. Find how many such lucky tickets are found in the ‘n’ number of tickets purchased by Kishore.
#include <stdio.h>

int main() {
    int size,number,rem,temp,count= 0;
    printf("Enter the n number of lottery tickets\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the tickets numbers: \n");
    for(int i = size; i > 0; i--)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        temp = arr[i];
        while(temp)
        {
            rem = temp % 10;
            if(rem == 3)
            {
                ++count;
                break;
            }
            else
            {
                temp = temp / 10;
            }
            
        }
         
    }
    
    printf("the count is %d\n", count);
    
    return 0;
}
