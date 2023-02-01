//Given Year is a leap year or not

#include<stdio.h>
int main()
{
    int number;

    printf("Enter a Year :");
    scanf("%d",&number);

    if((number%4) == 0 && (number%100 != 0) || (number%400 == 0))
    {
        printf("%d is a Leap Year",number);
    }
    else
    {
        printf("%d is not a Leap Year",number);
    }

    return 0;
}
