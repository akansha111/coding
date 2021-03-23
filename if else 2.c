//Write a program that display a menu of two choices “1. UAE, 2. Non-UAE” and the user will select his
//option, the program read the user age and display if he is eligible for the National Medial Card or not
//Users with UAE citizenship and age greater than 18 years old are eligible.
#include <stdio.h>
int main()
{
    int age,UAE,Non_UAE,choice;
    printf("Select the choice:1.UAE 2.Non-UAE");
    scanf("%d",&choice);
    printf("enter your age");
    scanf("%d",&age);
    if(choice<18 && age>18)
    printf("You are eligible for National Medial Card");
    else
    printf("Sorry, you are not eligible for National Medial Card");
    return 0;
}
