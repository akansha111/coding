/*
If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
*/
#include <stdio.h>
int main()
{
int maths, english, business, economics, music,total;
printf("enter the marks for maths \n");
scanf("%d", &maths);
printf("enter the marks for business \n");
scanf("%d", &business);
printf("enter the marks for english \n");
scanf("%d", &english);
printf("enter the marks for economics \n");
scanf("%d", &economics);
printf("enter the marks for music \n");
scanf("%d", &music);
total = maths+business+english+economics+music;
printf("Total is: %d ",total);

}
