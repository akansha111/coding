#include <stdio.h>
int main()
{
int totalprice,discount,deliverychgs;
printf("enter the totalprice");
scanf("%d",&totalprice);
discount=(totalprice*20)/100;
totalprice=totalprice-discount;
deliverychgs=totalprice+50;
printf("totalprice after giving 20 discount and adding 50 deliverychgs is %d",deliverychgs);


}
