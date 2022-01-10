#include<stdio.h>
int main()
{
  char str[20],*ptr;
    int i;
    printf("enter a string:");
    gets(str);
    ptr=str;
   for(i=0;*ptr>0;i++)
          {
           ptr++;
          }
    printf("length of string: %d",i);
     return 0;
}
