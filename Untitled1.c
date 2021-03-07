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
    int total=(2000*Rs2000)+(500*Rs500)+(200*Rs200)+(20*Rs20)+(1*Rs1);
    printf("you have deposited into the bank %ld",total);
    int remain_total=(45678-total);
    printf("\n you need more %ld",remain_total);
    printf("\n you have successfully deposited Rs.45678 %ld",remain_total=0);




}
