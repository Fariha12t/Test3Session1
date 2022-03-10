#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("enter the string\n");
  scanf("%s", a);
}
int count_words(char *string)
{
  char a[20];
  int i,count=0,sp=0;
  for(i=0;a[i]!=0;i++)
    {
      count++;
        if(a[i]==' ')
          sp++;
      
    }
   return count;
    
}
void output(char *string, int no_words)
{
  printf("number of words %d",no_words+1);
}
int main()
{
  char a[20];
  input_string(a);
  int n;
  n=count_words(a);
  output(a,n);
  return 0;
}