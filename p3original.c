#include<stdio.h>
int input(int *n, int *r)
{
  printf("enter the value of n and r:\n");
  scanf("%d%d", n,r);
  return 0;  
}
int ncr(int n, int r)
{
  float ncr;
  int fact(int a);
  ncr=fact(n)/(fact(r)*fact(n-r));
}
int fact(int a)
  {
    if(a==1)
      return 1;
    else 
      return a*fact(a-1);
  }
void output(int n, int r , int result)
{
  printf("nCr factorial of %d and %d is %d", n,r,result);
}
int main()
{
  int n, r,result;
  input(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}