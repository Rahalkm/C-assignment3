#include<stdio.h>
int main()
{
   int a=5,b=4,c=3;

   if(a+b>c)
        printf("valid triangle ");
   else if(a+c>b)
        printf("valid triangle");
   else if(b+c>a)
        printf("valid triangle");
   else
    printf("invalid triangle");

    return 0;
}

