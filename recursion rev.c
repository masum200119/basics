#include<stdio.h>
int main()
{
    int num,rev_number;
     printf("\nEnter any number:");
    scanf("%d",&num);

    rev_number=rev_function(num);
    printf("\nAfter reverse the no is :%d",rev_number);
    return 0;

}

int sum=0,rem;
rev_function(int num)
{
    if(num)
        {
        rem= num%10;
    sum=sum*10+rem;
    rev_function(num/10);
    }
    else
    return sum;

return sum;
}
