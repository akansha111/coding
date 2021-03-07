#include <stdio.h>
int main ()

{
int totalprice,discount,deliverycharges;
printf("enter the totalprice \n");
scanf("%d",&totalprice);
discount=(totalprice*20)/100;
totalprice=totalprice-discount;
deliverycharges = totalprice+50;
printf("totalprice after giving 20 discount and adding 50 deliverycharges is %d \n",deliverycharges );
return 0;







}
