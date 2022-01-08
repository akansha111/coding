/*A library charges a fine for every book returned late. For first
5 days the fine is 50p, for 6-10 days fine is £1 and
above 10 days fine is £5. If you return the book after 30
days your membership will be canceled. Write a program to
accept the number of days the member is late to return the
book and display the fine or the appropriate message.
*/
#include<stdio.h>
int main()
{
    int days,fine;
    printf("Enter the number of days you returned your book late: ");
    scanf("%d",&days);
    if (days<5)
        printf("You won't get a fine or lose your membership");
    if (days==5)
        printf("Your fine is 50p");
    if(days>=6 && days<=10)
        printf("Your fine is 1 pound");
    if (days>10 && days<30)
        printf("Your fine is 5 pound");
    if (days>=30)
        printf("Your membership is canceled!");
}
