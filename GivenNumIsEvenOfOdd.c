//Given Number is Even or Odd

#include<stdio.h>
int main()
{
    int number;

    printf("Enter A Number :");
    scanf("%d",&number);

    if((number%2)==0)
    {
        printf("%d is a Even Number",number);
    }
    else
    {
     printf("%d is a Odd Number",number);
    }

    return 0;
}

