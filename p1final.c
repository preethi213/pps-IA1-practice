#include<stdio.h>
int input()
{
  int num;
  printf(" enter the number:\n");
  scanf("%d",&num);
 return num;
}
int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}
void output(int a,int b,int sum)
{
  printf("sum of %d and %d is %d\n",a,b,sum);
}
int main()
{
  int n1,n2;
  n1=input();
  n2=input();
  int sum;
  sum=add(n1,n2);
  output(n1,n2,sum);
  return 0;
}