#include<stdio.h>

int input_degree()
{
  int n;
  printf("enter degree:\n");
  scanf("%d",&n);
  return n;
}
float input_x()
{
  float x;
  printf("enter value of x:\n");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n,float a[n])
{
 
  for(int i=n;i>=0;i--)
    {
      printf("Enter the coefficient of [x^%d]:",i);
      scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n,float a[n],float x)
{
  int sum=0;
  for(int i=n;i>0;i--)
    {
      sum=(sum+a[i])*x;
      
    }
  sum=sum+a[0];
  return sum;
}
void out_put(int n,float a[n],float x,float result)
{
  printf("%f\n",result);
}
int main()
{
  int n;
  float x;
  n=input_degree();
  x=input_x();
  float a[n],result;
  input_coefficients(n,a);
  result=evaluate_polynomial(n,a,x);
  out_put(n,a,x,result);
}