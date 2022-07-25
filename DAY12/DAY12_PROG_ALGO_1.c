/*
Name : Puneeth G S
Date : 25/07/2022
Problem : Find common elements in three sorted arrays, 3 array values are given as input to program.
input : Please the enter the size value: 5 4 3 
        Please enter the 5 elements for array1 : 10 20 30 40 50
        Please enter the 4 elements for array2 : 10 20 30 40
        Please enter the 3 elements for array3 : 10 20 30 
Output : The common element present in all the 3 array is : 10 20 30 

Algorith 

1.Start 
2.Variable Declaration 
3.Read the inputs from the user
4.Usign the 3 nested for loop and if conditon and logical AND operation perform the opration to find the common elements which are all present inside the 3 arrays
5.Print the  common elements
6.Stop
*/
#include<stdio.h>  //Header file 
int main() // Main function starts from here
{
    //variable declaration 
    int size1, size2, size3;
    //Read the inputs from the user
    printf("Please the enter the size value: ");
    scanf("%d%d%d", &size1, &size2, &size3);
    //Arrays with sizes declaration
    int array1[size1], array2[size2], array3[size3];
    //Read the arrays elements from the user
    printf("Please enter the %d elements for array1 : ", size1);
    for(int i = 0; i < size1; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Please enter the %d elements for array2 : ", size2);
    for(int i = 0; i < size2; i++)
    {
        scanf("%d", &array2[i]);
    }
    printf("Please enter the %d elements for array3 : ", size3);
    for(int i = 0; i < size3; i++)
    {
        scanf("%d", &array3[i]);
    }
    
    //user the 3 nested for loop and logical AND operation perform the below operation
    printf("The common element present in all the 3 array is : \n");
    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            for(int k = 0; k < size3; k++)
            {
                if((array1[i] == array2[j]) && (array1[i] == array3[k]))
                printf("%d ", array1[i]);
                
            }
        }
    }
    return 0;
    
}
