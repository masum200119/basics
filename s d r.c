
#include<stdio.h>
int main()
{
  int n,sum_number;
     printf("\nEnter any number:");
    scanf("%d",&n);

   sum_number=sum_function(n);
    printf("\nAfter sum is :%d",sum_number);
    return 0;

}

int s=0,rem;
sum_function(int n)
{
    if(n)
        {
        rem= n%10;
    s=s+rem;
    sum_function(n/10);
    }
    else
    return s;

return s;
}
