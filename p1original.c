#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the fraction 1\n");
  scanf("%d%d", num1,den1);
  printf("Enter the fraction 2\n");
  scanf("%d%d", num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  *num3=(num1*den2)+(num2*den1);
  *den3=den1*den2;
  int gcd;
  for(int i=1;i<=*num3 && i<=*den3;i++)
  {
    if (*num3%i==0 && *den3%i==0)
      gcd=i;
  }
  *num3=*num3/gcd;
  *den3=*den3/gcd;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("the sum of fractions %d/%d and %d/%d is %d/%d\n",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int n1,d1,n2,d2,n3,d3;
  input(&n1,&d1,&n2,&d2);
  add(n1,d1,n2,d2,&n3,&d3);
  output(n1,d1,n2,d2,n3,d3);
  return 0;
}