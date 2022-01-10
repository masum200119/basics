#include<stdio.h>
int main()
{
    int v,t;
     printf("enter velocity and time:");
    while(scanf("%d%d",&v,&t)==2)
        {

            printf("%d",v*2*t);
        }
        return 0;

    }
