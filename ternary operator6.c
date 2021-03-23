#include<stdio.h>
int main()
{
  int item;
  printf("Enter the number of items: ");//show to user the value of item
  scanf("%d",&item);//input the value of x from user
  printf("You have %d item%s.", item, (item==1)?"":"s"); //show to user the value of item.If item equals to 1,write the item
  return 0;
}
