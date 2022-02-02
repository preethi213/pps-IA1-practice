#include<stdio.h>

int large(int a,int b,int c)
{
  if(a>=b && a>=c)
  return a;

  else 
  if(b>=a && b>=c)
  return b;

  else
  printf("c is the largest\n");
   return c;
}
 int main()
 {
   int num1,num2,num3,largest;
    printf("enter three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);

    largest =large(num1,num2,num3);
    printf("largest number= %.2d",largest);
    return 0;
 }
 