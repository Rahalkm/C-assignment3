#include<stdio.h>
int main()
{
    int a=5,b=10,c=15;

    if((a>b) && (a>c))
        printf("A is the greatest no. ");
    else if((b>a) &&(b>c))
        printf("B is greatest no.");
    else if((a==b)||(b==c)||(a==c))
        printf("Greatest no. is repeated");
    else
        printf("C is the greatest no.");
return 0;
}
