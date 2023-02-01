//Given number is positive or negative
#include<stdio.h>
#include<conio.h>
int main()
{
    int number;

    printf("Enter A Number :");
    scanf("%d",&number);

    if(number>0)
    {
        printf("%d is a Positive Number",number);
    }
    else if(number<0)
    {
        printf("%d is a Negative Number",number);
    }
    else
    {
     printf("%d Number is Zero",number);
    }
return 0;
}
