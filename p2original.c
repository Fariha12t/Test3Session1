#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
   Fraction f;
   printf("Enter the fraction:");
  scanf("%d%d", &f.num,&f.den);
  return f;
}
Fraction Smallest_fraction(Fraction f1,Fraction f2, Fraction f3)
{
  Fraction  smallest ,f4;
  f4.den=f1.den*f2.den*f3.den;
  if(f1.num*f2.den< f2.num*f1.den) 
  {
    if (f1.num*f3.den<f3.num*f1.den)
    smallest.num=f1.num;
    smallest.den=f1.den;
  }
  else if (f2.num*f3.den<f3.num*f2.den)
  {
    smallest.num=f2.num;
    smallest.den=f2.den;
  }
  else 
  {
    smallest.num=f3.num;
    smallest.den=f3.den;
  }
  return smallest;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest)
{

  printf("the smallest fraction is %d/%d", smallest.num,smallest.den);
}
int main()
{
  Fraction f1,f2,f3,smallest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  smallest=Smallest_fraction(f1,f2,f3);
  output(f1,f2,f3,smallest);
  return 0;
}
