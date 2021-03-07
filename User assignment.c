//Write a program in c to perform the below operation://

//you have to deposit in the Bank the amount Rs. 45678

//And you have Denominations notes are 2000,500,200,20,1

#include <stdio.h>
int main ()
{
    int Rs2000,Rs500,Rs200,Rs20,Rs1;
    printf("total amount is Rs.45678\n");
    printf("enter the denomination notes for Rs2000");
    scanf("%d",&Rs2000);
    printf("enter the denomination notes for Rs500");
    scanf("%d",&Rs500);
    printf("enter the denomination notes for Rs200");
    scanf("%d",&Rs200);
    printf("enter the denomination notes for Rs20");
    scanf("%d",&Rs20);
    printf("enter the denomination notes for Rs1");
    scanf("%d",&Rs1);
    long int total=(2000*Rs2000)+(500*Rs500)+(200*Rs200)+(20*Rs20)+(1*Rs1);
    printf("you have deposited into the bank %ld",total);
    long int remain_total=(45678-total);
    printf("\nyou need more %ld",remain_total);
    printf("\nyou have successfully deposited Rs.45678 %ld",remain_total==0);




}



}
