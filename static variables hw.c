#include <stdio.h>
int main ()
{
    int y=10;
    int z=(++y*(y++ +5));
    //int z=(11*(11+5)   - 1st step= you had ++y so you had (10+1)=11.
    //then you had y++ so since it is a post increment,you had the same value as y (11) but then you carried a 1.
    //int z=(11+1*)+(11+5)   - Second step= then you added the 1 to the y in ++y which made it 12.
    printf("%d",z);
    return 0;
}
