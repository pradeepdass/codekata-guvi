#include <stdio.h>

int main(void) {
    int year;
 
  printf("Enter a year to check if it is a leap year\n");
  scanf("%d", &year);
 
  if ( year%400 == 0)
    printf("%d is a leap year.\n", year);
  else if ( year%100 == 0)
    printf("%d is not a leap year.\n", year);
  else if ( year%4 == 0 )
    printf("%d is a leap year.\n", year);
  else
    printf("%d is not a leap year.\n", year);  
 
	// your code goes here
	return 0;
}

