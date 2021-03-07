#include <stdio.h>
int main()
{
int subject_1,subject_2,subject_3,total;
printf("enter marks for subject_1");
scanf("%d",&subject_1);
printf("enter marks for subject_2");
scanf("%d",&subject_2);
printf("enter marks for subject_3");
scanf("%d",&subject_3);
total=subject_1+subject_2+subject_3;
float percent=total/3;
printf("subject_1 marks is %d",subject_1);
printf("\n subject_2 marks is %d",subject_2);
printf("\n subject_3 marks is %d",subject_3);
printf("\n total of the three subjects is %d",total);
printf("\n percentage is %f",percent);
return 0;
}



