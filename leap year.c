//Write a C program that determines if a year is a leap year.
//A leap year is every 4 years, but not every 100 years, then again every 400 years.
#include <stdio.h> //this is the headerfile, which contains the printf and the scanf
int main() { //this is the main function
   int year;
   printf("Enter a year: "); //show to user enter a year
   scanf("%d", &year); //input the value for variable year provided by user


   if (year % 400 == 0) {  // if year if perfectly divisible by 400...
      printf("%d is a leap year.", year); //show to user %d is a leap year
   }




   else if (year % 4 == 0) { //if year is not divisible by 100 but divisible by 4...
      printf("%d is a leap year.", year); //show to user %d is a leap year
   }

   else { // if the year is not divisible by 100,400 or 4...
      printf("%d is not a leap year.", year); //show to user %d is not a leap year
   }

   return 0; //return to main function

}
