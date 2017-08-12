#include <stdio.h>
void main()
{
  char str[100];
   int i=0,max=0;
   gets(str);
   for(i=0; str[i]!='\0';i++)
   {
       if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
      max=max+1;
   }
printf("The number of characters in the string are %d\n",max);
}
