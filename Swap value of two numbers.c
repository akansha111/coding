//Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
#include <stdio.h>
int main ()
{
int C,D;
printf("Enter value of C: ");
scanf("%d",&C);
printf("\nEnter value of D: ");
scanf("%d",&D);
printf("swap C=%d D=%d",C,D);
C=C+D;
D=C-D;
C=C-D;
printf("\n now swap C=%d D=%d",C,D);
return 0;
}
