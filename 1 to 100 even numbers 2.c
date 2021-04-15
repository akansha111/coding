//Write a C program to print all even numbers between 1 to 100. - using while loop

#include <stdio.h> //this is the headerfile which contains the printf and the scanf

int main() //this is the main function
{
int  i=0; //these are the provided variables

 printf("Enter the value of i:\n "); //show even numbers from 1 to 100 to user in a new line
    scanf("%d",&i); //input the value of i from user

    //while(i<=100) //until the value of i is 100, the script will print even numbers and once the value of i is more then 100,the code will stop
    {
      //  printf("%d\n", i); //show the numbers to the user in a new line
        if(i%2 == 0){
        printf("The number is even number:%d",i);
        }

       else{
         printf("The number is odd:%d",i);
       }


    }

    return 0; //return to main function
}
