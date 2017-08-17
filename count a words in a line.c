#include<stdio.h>
#include<stdio.h>
void main()
{
char str[100];
int count=0,i;
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
count++;
}
printf("count is %d",count+1);
}
