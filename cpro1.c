#include<stdio.h>
int main()
{
  int a,b,choice,res;
  printf("=======OPERATORS AND EXPRESSIONS=======\n");
  printf("enter the frist number:");
  scanf("%d",&a);
  printf("enter the second number:");
  scanf("%d",&b);
  printf("\n-----MENU-----\n");
  printf("1.Addition\n");
  printf("2.Subtraction\n"):
  printf("3.Multiplication\n");
  printf("4.Division\n");
  printf("5.Modulus\n");
  printf("\nenter your choice:");
  scanf("%d",&choice);
  switch(choice)
{
case 1:
 res=a+b;
 printf("result=%d",res);
 break;

case 2:
 res=a-b;
 printf("result=%d",res);
 break;

case 3:
 res=a*b;
 printf("result=%d",res);
 break;

case 4:
 if(b!=0)
{
 res=a/b;
 printf("result=%d",res);
}
else
{ 
 printf("Division by zero is not possible.");
}
break;

case 5:
 if(b!=0)
{ 
 res=a%b;
 printf("result=%d",res);
}
else
{
 printf("Modulus by zero is not possible.");
}
break;
default:
 printf("invalid choice.");
}
return 0; 
}
   
   


