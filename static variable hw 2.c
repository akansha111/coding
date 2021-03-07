#include <stdio.h>
int main()
{
    int x=5;
    int z =(x++)+(++x)+x; // x++ is a post increment so it initialises first and increases later.
    //So x++ value is same as  i.e. x++ is 4. But it carries 1 which adds with x  first and makes it 5(4+1).
    //After that ++x is a pre increment and it increases first so it makes the value of ++x 6 and then initialises.
    //So the value of +x is 6.
    //int z =(4)+(1+4+1)+6;
    printf("%d",z);
    return 0;
}
