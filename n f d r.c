
#include<stdio.h>
int main()
{
  int n,num_digit;
     printf("\nEnter any number:");
    scanf("%d",&n);

   num_digit=num_function(n);
    printf("\nAfter num is :%d",num_digit);
    return 0;

}

int count=0;
num_function(int n)
{
    if(n)
        {
       count=count+1;
    num_function(n/10);
    }
    else
    return count;

return count;
}
