#include<stdio.h>
int input(int *n, int *r)
{
  printf("enter the value of n and r:\n");
  scanf("%d%d", n,r);
  return 0;  
}

int ncr(int n,int r)
{
  int a=1,b=1,c=1,d;
  for(int i=1;i<=n;i++)
    {
      a=a*i;
    }
  for(int i=1;i<=(n-r);i++)
    {
      b=b*i;
    }
  for(int i=1;i<=r;i++)
    {
      c=c*i;
    }
  d=a/(c*b);
  return d;
}
void output(int n, int r , int result)
{
  printf("the value of %dC%d is %d", n,r,result);
}
int main()
{
  int n,r,result;
  input(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}