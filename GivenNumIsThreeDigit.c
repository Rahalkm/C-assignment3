//Given Number is a Three Digit Number

#include<stdio.h>
int main()
{
    int number;

    printf("Enter A Number :");
    scanf("%d",&number);

    if(number>99 && number<1000)
    {
        printf("%d is a Three digit Number",number);
    }
    else
    {
      printf("%d is not a Three digit Number",number);
    }

    return 0;
}



