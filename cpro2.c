#include<stdio.h>
int main()
{
  int a,b,res,choice;
  printf("=======BITWISE OPERATION=======\n");
  printf("enter the frist number:");
  scanf("%d",&a);
  printf("enter the second number:");
  scanf("%d",&b);
  printf("\n----MENU-----\n");
  printf("1.Bitwise AND(&)\n");
  printf("2.Bitwise OR(|)\N");
  printf("3.Bitwise XOR(^)\N");
  printf("4.Bitwise NOT(~)\n");
  printf("5.Left Shift(<<)\n");
  printf("6.Right Shift(>>)\n");
  printf("\nenter your choice:");
  scanf("%d",&choice);
  switch(choice)
{ 
case 1:
 res=a&b:
 printf("Bitwise AND result=%d",res);
 break:

case 2:
 res=a|b;
 printf("Bitwise OR result=%d",res);
 break;

case 3:
 res=a^b;
 printf("Bitwise XOR result=%d",res);
 break;

case 4:
 res=~a;
 printf("Bitwise NOT result=%d",res);
 break;

case 5:
 res=a<<b;
 printf("Left Shift result=%d",res);
 break;

case 6:
 res=a>>b;
 printf("Right Shift result=%d",res);
 break;

default:
 printf("Invalid choice.");
}
return 0;
}



