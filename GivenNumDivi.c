//Given Number is divisible by 5

#include<stdio.h>
int main()
{
    int number;

    printf("Enter A Number :");
    scanf("%d",&number);

    if((number%5)==0)
    {
        printf("%d Number is divisible by 5",number);
    }
    else
    {
     printf("%d Number is not divisible by 5",number);
    }

    return 0;
}
