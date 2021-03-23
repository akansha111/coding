#include <stdio.h>
int main()
{
printf("\nCond.\t Return"); //Cond. stands for Condition

printf("\n5 > 3  :\t %d",5 > 3);  //5>3 is correct.Therefore, this is 1

printf("\n5 < 3  :\t %d",5 < 3);   //5<3 is incorrect.Therefore, this is 0.

printf("\n5 <= 5 :\t %d",5 >=5);  //5>=5 is incorrect.Therefore, this is 1.

printf("\n6 >= 5 :\t %d",6 >=5);  //6>=5 is correct.Therefore, this is 1.

printf("\n5 == 3 :\t %d",5 == 3);  //5==3 is incorrect.Therefore, this is 0.

printf("\n3 != 3 :\t %d",3 != 3);  //3!=3 is incorrect.Therefore, this is 0.
return 0;
}
