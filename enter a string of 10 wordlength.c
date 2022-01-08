#include<stdio.h>
int main()
{
    char str1;
    printf("Enter a string of 10 wordlength: ");
    scanf("%c",&str1);
    if (strlen(str1) != 10)
        printf("Incorrect wordlength");
    else
        printf("Correct");
}
