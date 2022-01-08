//Write a program to make a calculator
#include<stdio.h>
int main()
{
    int num1,num2,multi,add,div,sub,oper;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("(multiply/add/subtract/divide): ");
    scanf("%c",&oper);
    if (oper == 'multiply')
    {
        multi=num1*num2;
        printf(multi);
    }
    if (oper == 'add')
    {
        add=num1+num2;
        printf(add);
    }
    if (oper == 'subtract')
    {
        sub=num1-num2;
        printf(sub);
    }
    if (oper == 'divide')
    {
        div=num1/num2;
        printf(div);
    }
}
