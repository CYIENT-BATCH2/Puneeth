// Write a program to convert Celsius form of temperature into Fahrenheit and vice versa. 
#include <stdio.h>

int main() {
    // Write C code here
    float celsius,fahrenheit;
    int option;
    char ch;
    do
    {
    printf("Enter the celsius and fahrenheit\n1)For celsius\n2)For fahrenheit\n");
    scanf("%d",&option);
        switch (option)
    { 
        case 1:
        printf("Enter the celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("calsius is %.2f = fahrenheit is %.2f",celsius,fahrenheit);
        break;
        case 2:
        printf("Enter the fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5/9;
        printf("fahrenheit is %.2f = calsius is %.2f ",fahrenheit,celsius);
        break;
    }
    printf("\nDo you want to continue enter Y\n");
    scanf(" %c", &ch);
}while(ch == 'Y');
return 0;
}
