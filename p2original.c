#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("Enter the fraction \n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}
Fraction Smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  Fraction smallest;
  if(f1.num*f2.den<f2.num*f1.den)
  {
    if(f1.num*f3.den<f3.num*f1.den)
    
      smallest=f1;
    
  }
  else if(f2.num*f3.den<f3.num*f2.den)
  {
    smallest=f2;
   }
  else
  {
    smallest=f3;
  }
  return smallest;
}


void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest)

{
  printf("the smallest of  fractions %d/%d ,%d/%d and %d/%d is %d/%d\n",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,smallest.num,smallest.den);
}
int main()
{
  Fraction f1,f2,f3,Smallest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  Smallest=Smallest_fraction(f1,f2,f3);
  output(f1,f2,f3,Smallest);
  return 0;
  }

    
