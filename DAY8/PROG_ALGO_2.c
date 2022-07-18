/* 
Name = Puneeth G S
Date = 18/07/2022
problem = Write a program in C to sort an array using Pointer.
Input :
Input the number of elements to store in the array: 5
Input 5 number of elements in the array : 
element-0 : 10
element-1 : 5
element-2 : 20
element-3 : 60
element-4 : 80
Output : 
The elements in the array after sorting: 
element-0 : 5
element-1 : 10
element-2 : 20
element-3 : 60
element-4 : 80

Algorithm
1.Start
2.Declare the variables
3.Read the array elements from the user
4.Declaare the pointer with array
5.Use pointer make array sorting
6.print the array elements after the sorted 
7.stop
*/

#include <stdio.h>
int main()
{
    //declare the variables
    int size, temp;
    //read the input from the user
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size);
    //declare the array with the size 
    int array[size]; 
    //read array elements from the user
    printf("Input %d number of elements in the array : \n", size);
    for(int i = 0; i < size; i++)
    {
        printf("element-%d : ",i);
        scanf("%d",&array[i]);
    }
    //declare the pointer and store the base address of an array
    int *ptr = array;
    //using the pointer doing the sorted array
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
        
    }
    printf("The elements in the array after sorting: \n");
    for(int i = 0; i < size; i++)
    {
        printf("element-%d : ",i);
        printf("%d\n",*(ptr + i));
    }
  return 0;
}
