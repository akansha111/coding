//Create a list of two sports. Ask the user what their favorite sport is and add this to the end of the list. Sort the list and display it.
#include <stdio.h>
int main()
{
    char sport;
    char arr[5] =("Football" "Basketball" "Dodgeball");
printf("Enter your favorite sport: ");
scanf("\n%c",&sport);
arr[3]=sport;
printf("\n",arr[3]);

return 0;
}
