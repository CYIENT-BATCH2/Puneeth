/*
Name : Puneeth G S
Date : 25//07/2022

Write a program to do binary search in a sorted array. Program should take input of sorted values and search value. (Make number of elements as configurable value)
How binary search works is explained below.
Algorithm 


*/


#include <stdio.h> //Header file
int main() //main function starts from here
{
    int i, low, high, mid, n, key, array[100]; //Variable declaration
    printf("Enter number of elements: ");  //read the input size from the user
    scanf("%d",&n); 
    //read the sorted interger value from the user
    printf("Enter %d integers", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    } 
    //read the input key value from the user which has to search 
    printf("Enter value to find : ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low+high)/2;
    while (low <= high)  //using the below logic have to do binary search
    {
        if(array[mid] < key)
            low = mid + 1;
        else if (array[mid] == key) {
            printf("%d found at location %d \n", key, mid+1);
        break;
        }
        else
        high = mid - 1;
        mid = (low + high)/2;
    }
    if(low > high)
        printf("Not found! %d isn't present in the list\n", key);
    return 0;
}
