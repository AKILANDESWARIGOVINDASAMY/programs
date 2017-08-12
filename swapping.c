#include<stdio.h>
void main()
{
int a,b,temp;
printf("Before swapping the 2 numbers");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("After swapping the two number is %d%d",a,b);
}
