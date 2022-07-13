#include <stdio.h>
int main()
{
    int arr[10] = {9,1,5,4,3,2,6,7,8,0};
    int temp = 0;
    printf("Seat numbers which have been swapped:\n");
    for(int i = 0;i < 10;i++)
    {
        printf("%d ", arr[i]);
    }
    for(int i = 0;i < 10;i++)
    {
        for(int j = i + 1; j < 10; j++ )
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n");
    for(int i = 0;i < 10;i++)
    {
        printf("%d ", arr[i]);
    }
}




//sorting using the if else statement 
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here    
    int n1, n2, n3, n4, n5, n6, n7, n8, n9;
    int temp;
    printf("Please enter swapped the 1 - 9 seat numbers;\n");
    scanf("%d%d%d%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9);
    loop:
    if(n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
        goto loop;
    }
     if(n2 > n3)
    {
        temp = n2;
        n2 = n3;
        n3 = temp;
        goto loop;
    }
     if(n3 > n4)
    {
        temp = n3;
        n3 = n4;
        n4 = temp;
        goto loop;
    }
     if(n4 > n5)
    {
        temp = n4;
        n4 = n5;
        n5 = temp;
        goto loop;
    }
     if(n5 > n6)
    {
        temp = n5;
        n5 = n6;
        n6 = temp;
        goto loop;
    }
     if(n6 > n7)
    {
        temp = n6;
        n6 = n7;
        n7 = temp;
        goto loop;
    }
     if(n7 > n8)
    {
        temp = n7;
        n7 = n8;
        n8 = temp;
        goto loop;
    } 
    if(n8 > n9)
    {
        temp = n8;
        n8 = n9;
        n9 = temp;
        goto loop;
    }
    
    printf("The ascending seat number are : %d %d %d %d %d %d %d %d %d", n1, n2, n3, n4, n5, n6, n7, n8, n9);
    
    return 0;
}
