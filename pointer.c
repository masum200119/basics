#include<stdio.h>
void swapping(int *ptr1,int *ptr2)
{

    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
   *ptr2=temp;

}
int main()
{
    int x=5,y=6;
    printf("before swapping x=%d y=%d",x,y);
    printf("\n");
     swapping(&x,&y);
    printf("after swapping x=%d y=%d",x,y);
   getch();
}
