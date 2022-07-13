//leap year
#include <stdio.h>

int main(){

   int start_year = 1990, end_year = 2022,count = 0;

  for(int i = start_year;i <= end_year; i++)
  {
     if (((i % 4 == 0) && (i % 100!= 0)) || (i % 400 == 0))
    {
      printf("%d is a leap year\n", i);
      count++;
    }
    
  }
  printf("The number of leap year between 1990 to 2022 is : %d", count);

   return 0;
}
