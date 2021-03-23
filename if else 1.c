//Write a program that read the student mark and absent percentage and display proper message
//considering the pass mark is 60 and the course drop rate is 15%.
#include <stdio.h>
int main()
{
    int mark;
    printf("Please enter your mark:");
    scanf("%d",&mark);
    if(mark>=60)
    printf("You passed!");
    else
    printf("You failed");
    return 0;
}
