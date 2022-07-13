#include<stdio.h>
int main()
{
    int num1, num2, num3, num4, num5, num6, num7, num8;
    float num9, num10, num11, num12, num13, num14, num15;
    int average, sum;
    float average1,average2, sum1, div1, div2;
    char option;
    char cont;
   do
   {
    printf("a.Collect 15 elements (8 integers, 7 float) as i/p from user\nb.Calculate and Print the sum, average and mean of integers\nc.Calculate and Print the sum, average of all float values\nd.Divide sum in statement \'b'\ with statement \'c'\ sum and print the value.\ne.Divide average in statement b with statement c average and print the value.\nf.Convert all 7 float values to integers and print them.\n");
    
     printf("Enter the option : ");
     scanf(" %c",&option);
     switch(option)
     {
        case 'a':
        printf("1.Collect 15 elements (8 integers, 7 float) as i/p from user\n");
        scanf("%d%d%d%d%d%d%d%d%f%f%f%f%f%f%f",&num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15);
        break;
        case 'b':
        sum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8;
        average1 = (float) sum / 8;
        printf("the sum of integers is %d and average of the integers is %.2f\n",sum , average1);
        break;
        case 'c':
        sum1 = num9 + num10 + num11 + num12 + num13 + num14 + num15;
        average2 = sum1 / 7;
        printf("the sum of float values is %f and average of float values is is %.2f\n",sum1 , average2);
        break;
        case 'd':
        div1 = sum / sum1;
        printf("Divide sum in statement 'b' with statement 'c' sum is %.2f\n", div1);
        break;
        case 'e':
        div2 = average1 / average2;
        printf("Divide average in statement b with statement c average  is %.2f\n", div2);
        break;
        case 'f':
        printf("7 float values are %f %f %f %f %f %f %f to %d %d %d %d %d %d %d\n", num9, num10, num11, num12, num13, num14, num15, (int)num9, (int)num10, (int)num11, (int)num12, (int)num13, (int)num14, (int)num15);
        break;
        
    }
    printf("Enter y to continue n for not continue: \n");
    scanf(" %c", &cont);
    }while(cont == 'y');
    return 0;
}



///second method 
#include<stdio.h>
int main()
{
    int num1, num2, num3, num4, num5, num6, num7, num8;
    float num9, num10, num11, num12, num13, num14, num15;
    int average, sum;
    float average1,average2, sum1, div1, div2;
    char option;
    char cont;
    printf("a.Collect 15 elements (8 integers, 7 float) as i/p from user\nb.Calculate and Print the sum, average and mean of integers\nc.Calculate and Print the sum, average of all float values\nd.Divide sum in statement \'b'\ with statement \'c'\ sum and print the value.\ne.Divide average in statement b with statement c average and print the value.\nf.Convert all 7 float values to integers and print them.\n");
        scanf("%d%d%d%d%d%d%d%d%f%f%f%f%f%f%f",&num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15);
        sum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8;
        average1 = (float) sum / 8;
        printf("The sum of integers is %d and average of the integers is %.2f\n",sum , average1);
        sum1 = num9 + num10 + num11 + num12 + num13 + num14 + num15;
        average2 = sum1 / 7;
        printf("The sum of float values is %f and average of float values is is %.2f\n",sum1 , average2);
        div1 = sum / sum1;
        printf("Divide sum in statement 'b' with statement 'c' sum is %.2f\n", div1);
        div2 = average1 / average2;
        printf("Divide average in statement b with statement c average  is %.2f\n", div2);
        printf("7 float values are %f %f %f %f %f %f %f to Integer value %d %d %d %d %d %d %d\n", num9, num10, num11, num12, num13, num14, num15, (int)num9, (int)num10, (int)num11, (int)num12, (int)num13, (int)num14, (int)num15);
    
    return 0;
}
