#include<stdio.h>
int main()
{
   char b='0';

   if(b>=65&&b<=91)
    printf("upper");
   else if(b>=97&&b<=123)
    printf("lower");
   else
    printf("digit and symbol");



    return 0;
}

