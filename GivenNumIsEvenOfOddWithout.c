//Given Number is Even or Odd without %

#include<stdio.h>
int main()
{
    int number;

    printf("Enter A Number :");
    scanf("%d",&number);

    if((number & 1)==1)
    {
        printf("%d is a Odd Number",number);
    }
    else
    {
     printf("%d is a Even Number",number);
    }

    return 0;
}


