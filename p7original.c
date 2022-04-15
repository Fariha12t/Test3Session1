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
Fraction input_fraction()
{
  Fraction f;
  printf("Input a fraction \n");
  scanf("%d%d", &f.num, &f.den);
  return f;
}
Fraction add_fraction(Fraction f1, Fraction f2)
{
  Fraction sum;
  sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int gcd=find_gcd(sum.num,sum.den);
  sum.num=sum.num/gcd;
  sum.den=sum.den/gcd;
  return sum;
  
}
void output(Fraction f1, Fraction f2, Fraction sum)
{
  printf(" the sum of two fractions is %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den, sum.num,sum.den);
}
int main()
{
  Fraction f1,f2,sum;
  f1=input_fraction();
  f2=input_fraction();
  sum=add_fraction(f1,f2);
  output(f1,f2,sum);
  return 0;
}

