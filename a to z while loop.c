//Write a C program to print all alphabets from a to z. - using while loop

#include <stdio.h> //this is the headerfile which contains the printf and the scanf

int main() //this is the main function

 char letter = 'a'; //these are the provided variable

    printf("Alphabets from a - z are:\n "); //show Alphabets from a-z to user in a new line
    while(letter<='z') //while(a<=z)
    {
        printf("%c\n", letter); //show the characters to the user in a new line
        letter++; //this is the incremented value of ch
    }

    return 0; //return to main function
}
