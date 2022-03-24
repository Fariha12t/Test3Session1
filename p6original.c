#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("enter the string\n");
  fgets(a,200,stdin);
}
int count_words(char *string)
{
  int count=0;
  for(int i=0;string[i]!='\0';i++)
    {
     if(string[i]==' ')
     {
       count=count+1;
     }
    }
  return count;
    
}
/*int count_words(char *string)
{
  char a[20];
  int i=0,count=0, word=0;
  do
  
    {
      if(a[i]==' ' || a[i]=='\t' || a[i]=='\0')
      {
        if(word)
        {
          word=0;
          count++;
        }
         else
      {
        word=1;
      }
      }
      }
      while(a[i++]);
        
   return count;
    
}*/
void output(char *string, int no_words)
{
  
  printf("number of words %d",no_words+1);
}
int main()
{
  char a[20];
  input_string(a);
  int no_words;
  no_words=count_words(a);
  output(a,no_words);
  return 0;
}