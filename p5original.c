#include<stdio.h>
int input_size()
{
  int k;
  printf("enter the size of array:");
  scanf("%d", &k);
  return k;
}
void input_array(int n, int a[n])
{
  
  printf("enter the values of array:\n");
  for(int i=0; i<n; i++)
    scanf("%d", &a[i]);
}
int find_largest(int n, int a[n])
{
  int index=0;
  for(int i=0;i<n;i++)
  {
      if(a[index]<a[i])
        index=i;
  }
  return index;
}
void output(int n, int a[n], int largest )
{ 
  printf("largest is %d ",a[largest]);
  {
  printf("its index is %d",largest);
  }
}
int main()
{
  int n,x;
  n=input_size();
  int a[n];
  input_array(n,a);
 
  x=find_largest(n,a);
  output(n,a,x);
  
  return 0;
}

  
