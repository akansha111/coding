#include <stdio.h>
int main ()
{
int DA,HRA,salary,Gross;
printf("The salary is: \n");
scanf("%d",&salary);
DA=(salary*15)/100;
printf("The dearness allowance is: %d \n",DA);
HRA=(salary*5)/100;
printf("The house rent allowance is: %d \n",HRA);
Gross=salary+DA+HRA;
printf("The gross salary is: %d \n",Gross);
return 0;





}
