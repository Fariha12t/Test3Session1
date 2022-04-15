#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction ;
int find_gcd(int a,int b)
{
  int gcd;
  for(int i=1;i<=a && i<=b;i++)
  {
    if (a%i==0 && b%i==0)
     gcd=i;
  }
  return gcd;
  }
int input_n()
{
  int n;
  printf("enter n \n");
  scanf("%d", &n);
  return n;
}
Fraction input_fraction()
{
  Fraction f;
  printf("Input a fraction \n");
  scanf("%d%d", &f.num, &f.den);
  return f;
}
void input_n_fractions(int n, Fraction f[n])
{
  for(int i=0; i<n; i++)
    {
      f[i]=input_fraction();
    }
}
Fraction add_fraction(Fraction f1, Fraction f2)
{
  Fraction sum;
  sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int g=find_gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
  
}
Fraction add_n_fractions(int n, Fraction f[n])
{
  Fraction sum;
  sum=f[0];
  for(int i=1;i<n;i++)
    {
      sum=add_fraction(sum,f[i]);
    }
  return sum;
}
void output_n_fractions(int n,Fraction f[n], Fraction sum)
{
  int i;
  for( i=0; i<n-1; i++)
  {
   printf("%d/%d+", f[i].num,f[i].den);
  }
  printf("%d/%d", f[i].num,f[i].den);
  printf(" is %d/%d", sum.num, sum.den);
}
int main()
{
  int n;
  n=input_n();
  Fraction f[n],sum;
  input_n_fractions(n,f);
  sum=add_n_fractions(n,f);
  output_n_fractions(n,f,sum);
  return 0;
}
